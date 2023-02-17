use std::io;

fn int_input() -> isize {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Can't read input");
    
    let input: isize = input.trim().parse().expect("This is not a number");

    input
}

fn determine_rows(coins: &isize) -> isize {
    let mut rows: isize = 0;

    rows
}

fn main() {
    let test_cases: isize = int_input();

    for _i in 0..test_cases {
        let n: isize = int_input(); //number of gold coins
        println!("{}", determine_rows(&n));
    }
}