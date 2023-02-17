use std::io;

fn int_input() -> usize {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Can't read input");
    
    let input: usize = input.trim().parse().expect("Not an integer");

    input
}

fn problem_count(vector: &Vec<usize>) -> usize {
    let mut count: usize = 0;

    for i in vector {
        if *i >= 1000 {
            count += 1;
        }
    }

    count
}

fn main() {
    let mut list: Vec<usize> = vec![];
    let n: usize = int_input();

    for _ in 0..n {
        let difficulty_rating = int_input();
        list.push(difficulty_rating);
    }

    let count: usize = problem_count(&list);

    println!("{}", count);
}