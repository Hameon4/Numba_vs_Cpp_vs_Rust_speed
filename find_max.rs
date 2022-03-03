use std::time::{Instant};

fn main() {
    let mut a: Vec<f32> = Vec::new();
    let mut b: Vec<f32> = Vec::new();
    for _i in 0..20000 {
        a.push(0.5);
        b.push(0.4);
    }
    let start = Instant::now();
    find_max(a, b);
    let duration = start.elapsed();
    println!("Time taken: {:?}", duration);
}

fn find_max(a: Vec<f32>, b: Vec<f32>)-> usize {
    println!("{} {}", a.len(), b.len());
    let mut maxi = 0;
    for i in 0..a.len() {
        for j in 0..b.len() {
            if i * j > maxi {
                maxi = i * j;
            }
        }
    }
    maxi
}
