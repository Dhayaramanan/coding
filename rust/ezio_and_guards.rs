use std::io;

fn int_input() -> i32 {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Cannot read input");

    let input: i32 = input
        .trim()
        .parse()
        .expect("Not a number");

    input
}

fn main() {
    let test_cases: i32 = int_input();

    for _i in 0..test_cases {
        let x = int_input();
        let y = int_input();

        if x >= y {
            println!("YES");
        } else {
            println!("NO");
        }
    }
}