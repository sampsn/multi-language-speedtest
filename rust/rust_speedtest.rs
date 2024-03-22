use std::time::Instant;

fn iterative(x: usize) {
    for j in 0..=x {
        let mut stuff = Vec::with_capacity(j);
        for i in 0..j {
            stuff.push(i);
        }
        // `stuff` vector gets dropped here at each iteration's end
    }
}
fn main() {
    let start = Instant::now();
    iterative(50000);
    let duration = start.elapsed();
    println!("{:?}", duration);
}

