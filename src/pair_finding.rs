use standard_vision::types::{Contour, Image};
use opencv::imgproc::{self, COLOR_BGR2HSV, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE};
use opencv::core::{Mat, in_range, Point, Scalar};

fn get_boxes_and_scores(contours: Vec<Contour>) {

}