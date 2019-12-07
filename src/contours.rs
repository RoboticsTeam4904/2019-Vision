use std::ops::Range;
use standard_vision::traits::{ContourExtractor};
use standard_vision::types::{Contour, Image};
use opencv::imgproc::{self, COLOR_BGR2HSV, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE};
use opencv::core::{Mat, in_range, Point, Scalar};
use opencv::types::{VectorOfPoint};

const AREA_RANGE: Range<i32> = 50..10000;
const PERIMETER_RANGE: Range<i32> = 0..10000;
const WIDTH_RANGE: Range<i32> = 10..500;
const HEIGHT_RANGE: Range<i32> = 10..500;
const SOLIDITY_RANGE: Range<i32> = 50..100;
const VERTICES_RANGE: Range<i32> = 0..1000000;
const RATIO_RANGE: Range<f32> = 0.2..5.0;

pub struct RFTapeCountourExtractor {

}

impl RFTapeCountourExtractor {
    fn is_contour_viable(contour: &VectorOfPoint) -> bool {

        let rect = imgproc::bounding_rect(contour).unwrap();

        if !WIDTH_RANGE.contains(&rect.width) {
            return false;
        }
        
        if !HEIGHT_RANGE.contains(&rect.height) {
            return false;
        }

        let area = imgproc::contour_area(contour, false).unwrap() as i32;

        if !AREA_RANGE.contains(&area) {
            return false;
        }

        let perimeter = imgproc::arc_length(contour, true).unwrap() as i32;

        if !PERIMETER_RANGE.contains(&perimeter) {
            return false;
        }

        let mut hull = Mat::default().unwrap();
        imgproc::convex_hull(contour, &mut hull, false, true);
        let solid = 100*area/imgproc::contour_area(&hull, false).unwrap() as i32;

        if !SOLIDITY_RANGE.contains(&solid) {
            return false;
        }

        let ratio = (rect.width/rect.height) as f32;

        if !RATIO_RANGE.contains(&ratio) {
            return false;
        }

        return true;
    }
}

impl<'a> ContourExtractor for RFTapeCountourExtractor {
    fn extract_from(&self, image: &Image<'_>) -> Vec<Contour<'_>> {
        let mut image_mat = Mat::default().unwrap();
        let mut hsv = Mat::default().unwrap();
        let mut thresh = Mat::default().unwrap();
        let mut contours_mat = Mat::default().unwrap();
        let offset = Point::new(0,0);
        let hsv_min = [50, 103, 150];
        let hsv_max = [94, 255, 255];

        imgproc::cvt_color(&image_mat, &mut hsv, COLOR_BGR2HSV, 0); // convert color to hsv
        in_range(&hsv, &Mat::from_slice(&hsv_min).unwrap(), &Mat::from_slice(&hsv_max).unwrap(), &mut thresh); // get threshold
        imgproc::find_contours(&mut thresh, &mut contours_mat, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE, offset); // get contours
        
        let contours = contours_mat.to_vec_2d::<Point>().unwrap();
        let filtered_contours = contours.iter().filter(|contour| self.is_contour_viable(contour)); // convert Vec<Point> to VecOfPoint

        return filtered_contours.map(|contour| {
            Contour {
                image: image,
                points: contour.iter().map(|point| (point.x as u32, point.y as u32)).collect(),
            }
        })
    }
}