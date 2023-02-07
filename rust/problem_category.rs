use std::io;

fn int_input() -> isize {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Can't read input");
    
    let input: isize = input.trim().parse().expect("This is not a number");

    input
}

fn main() {
    let test_cases: isize = int_input();

    for _i in 0..test_cases {
        let points = int_input();

        if points >= 1 && points < 100 {
            println!("Easy");
        } else if points >= 100 && points < 200 {
            println!("Medium");
        } else if points >= 200 && points <= 300 {
            println!("Hard");
        }
    }
}