use standard_vision::traits::{ContourExtractor};
use standard_vision::types::{Contour, Image};
use opencv::imgproc::{cvt_color, COLOR_BGR2HSV};
use opencv::core::{Mat};

// HUE_RANGE: 50..94,
// SAT_RANGE: 103..255,
// VAL_RANGE: 150..255,

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
        cvt_color(&imageMat, &mut hsv, COLOR_BGR2HSV, 0);
        let mut thresh = Mat::default().unwrap();
        opencv::core::in_range()
    }
}