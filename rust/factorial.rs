use std::io;

fn calculate_factorial(number: usize) -> usize {
    let mut factorial: usize = 1;

    for i in 1..number+1 {
        factorial *= i;
    }
    /*let mut counter: usize = number;
    while counter >= 1 {
        factorial *= counter;
        counter -= 1;
    }*/

    factorial
}

fn main() {
    let mut n = String::new();

    println!("Enter a positive integer:");
    io::stdin()
        .read_line(&mut n)
        .expect("Can't read input");

    let n: usize = n
        .trim()
        .parse()
        .expect("Not a number");

    let fact: usize = calculate_factorial(n);

    println!("{}! = {}", n, fact);
}