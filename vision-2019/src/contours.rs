use standard_vision::traits::{ContourExtractor};
use standard_vision::types::{Contour, Image};
use opencv::imgproc::{cvt_color, find_contours, COLOR_BGR2HSV, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE};
use opencv::core::{Mat, in_range, Point };


pub struct RFTapeCountourExtractor {

}

// impl RFTapeCountourExtractor {
//     fn check_contour(contour: &Contour) -> bool {

//     }
// }

impl<'a> ContourExtractor for RFTapeCountourExtractor {
    fn extract_from(&self, image: &Image<'_>) -> Vec<Contour<'_>> {
        let mut imageMat = Mat::default().unwrap();
        let mut hsv = Mat::default().unwrap();
        let mut thresh = Mat::default().unwrap();
        let mut contours = Mat::default().unwrap();
        let offset = Point::new(0,0);
        let hsv_min = [50, 103, 150];
        let hsv_max = [94, 255, 255];

        cvt_color(&imageMat, &mut hsv, COLOR_BGR2HSV, 0);
        in_range(&hsv, &Mat::from_slice(&hsv_min).unwrap(), &Mat::from_slice(&hsv_max).unwrap(), &mut thresh);
        find_contours(&mut thresh, &mut contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE, offset);
    }
}