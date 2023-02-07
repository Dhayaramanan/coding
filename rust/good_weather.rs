use std::io;

fn int_input() -> usize {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Can't read input");

    let input: usize = input
        .trim()
        .parse()
        .expect("Not an integer");
    
    input
}

fn sum(array: &[usize; 7]) -> (usize, usize) {
    let mut sum_of_sunny: usize = 0;
    let mut sum_of_rainy: usize = 0;

    for i in 0..7 {
        if array[i] == 1 {
            sum_of_sunny += 1;            
        } else {
            sum_of_rainy += 1;
        }
    }

    (sum_of_sunny, sum_of_rainy)
}

fn main() {
    let test_cases: usize = int_input();

    let mut weather_report: [usize; 7] = [0; 7];

    for _i in 0..test_cases {
        for j in 0..7 {
            weather_report[j] = int_input();
        }
        let (sunny_day, rainy_day): (usize, usize) = sum(&weather_report);

        if sunny_day > rainy_day {
            println!("Yes");
        } else {
            println!("No");
        }
    }
}