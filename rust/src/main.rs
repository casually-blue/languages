use std::env;


fn main() {
    let num = if let Some(num) = env::args().skip(1).next() {
        num.parse::<usize>().unwrap()
    } else {
        100
    };

    sieve(num);
}

fn sieve(num: usize) {
    let mut data = vec![false; num];

    print!("1 ");

    for i in 2..num {
        if !data[i] {
            print!("{} ", i);
        }
        for j in (i..num).step_by(i) {
            data[j] = true;
        }
    }
    println!("");
}
