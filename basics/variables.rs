use std::mem::size_of; //similar to python import
fn main(){
    let mut a:i32 = 1;
    let b: u32 = 2;
    let c = 0xffff;
    let d: usize = 4;// x bits on x-bit machine
    let x: f32 = 3.0;let y: f64 = 1e-10;
    let ch:char = '烟';//4 byte unicode character
    println!("{} {}",ch,size_of::<char>());
}