//Program to generate nth fibonacci number

use std::io;

fn nth_term(n: isize) -> isize {
    let mut t1: isize = 0;
    let mut t2: isize = 1;

    let mut t3: isize = 0;

    //println!("{t1}");
    //println!("{t2}");
    
    for _i in 3..n+1 {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        //println!("{t3}");
    }

    t3
}

fn main() {
    let mut n = String::new(); //nth term to be generated
    println!("Enter n:");
    io::stdin()
        .read_line(&mut n)
        .expect("Cannot read input");

    let n: isize = n
        .trim()
        .parse()
        .expect("Not a number");

    let term: isize = nth_term(n);

    println!("Number is: {}", term);
}