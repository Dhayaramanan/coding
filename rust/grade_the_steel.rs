use std::io;

fn int_input() -> i32 {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Can't read input");
    
    let input: i32 = input
        .trim()
        .parse()
        .expect("Not a number");
    
    input
}

fn float_input() -> f64 {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Can't read input");
    
    let input: f64 = input
        .trim()
        .parse()
        .expect("Not a number");
    
    input
}

fn main() {
    let test_cases: i32 = int_input();

    let mut hardness: i32;
    let mut carbon_content: f64;
    let mut tensile_strength: i32;

    let mut grade: i32;

    for _ in 0..test_cases {
        hardness = int_input();
        carbon_content = float_input();
        tensile_strength = int_input();

        if hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600 {
            
            grade = 10;

        } else if hardness > 50 && carbon_content < 0.7 {
            
            grade = 9;

        } else if carbon_content < 0.7 && tensile_strength > 5600 {

            grade = 8;

        } else if hardness > 50 && tensile_strength > 5600 {

            grade = 7;

        } else if hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600 {
            
            grade = 6;

        } else {

            grade = 5;

        }

        println!("{}", grade);
    }
}