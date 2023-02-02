use std::io;

fn int_input() -> i32 {
    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Can't read input");

    let input: i32 = input.trim().parse().expect("Not a number");

    input
}

fn main() {
    let test_cases: i32 = int_input();

    let mut n: i32;
    let mut x: i32;
    let mut y: i32;

    for _ in 0..test_cases {
        n = int_input();
        x = int_input();
        y = int_input();

        if x*y >= n {
            println!("YES");
        } else {
            println!("NO");
        }
    }
}
