use std::io;

fn int_input() -> i32 {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Can't read input");

    let input: i32 = input.trim().parse().expect("Not an integer");

    input
}

fn main() {
    let test_cases: i32 = int_input();

    for _ in 0..test_cases {
        let percentage: i32 = int_input();

        if percentage >= 80 {
            println!("Yes");
        } else {
            println!("No");
        }
    }
}
