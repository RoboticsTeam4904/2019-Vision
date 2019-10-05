// mod contours;
// use contours::*;
use opencv::{
    prelude::*,
    types::VectorOfint
};

fn main() {
    let mut b = VectorOfint::new();
    b.push(1);
    b.push(2);
    let a = b.get(0);
    // let b = vec.is_empty();
    println!("{}",a)
}