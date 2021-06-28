use std::env;


fn main() {
    // Get the number from the cli args, if not passed, just use a default of 100
    let num = if let Some(num) = env::args().skip(1).next() {
        num.parse::<usize>().unwrap()
    } else {
        100
    };

    sieve(num);
}

// sieve algorithm to calculate primes
fn sieve(num: usize) {
    // initialize the list of whether numbers are not prime
    let mut data = vec![false; num];

    // print 1 because it isn't calculated
    print!("1 ");

    // go through all numbers
    for i in 2..num {
        // print the number if it is not not prime
        if !data[i] {
            print!("{} ", i);
        }
        // if the number is a multiple mark it as not prime
        for j in (i..num).step_by(i) {
            data[j] = true;
        }
    }
    // print an end of line
    println!("");
}
