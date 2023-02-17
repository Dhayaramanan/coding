use std::io;

fn int_input() -> usize {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Can't read input");

    let input: usize = input
        .trim()
        .parse()
        .expect("Not a number");

    input
}

fn sort(v: &mut Vec<usize>, s: &usize) {
    for i in 0..*s {
        for j in 0..i {
            if v[j] > v[j+1] {
                let something = v[j];
                v[j] = v[j+1];
                v[j+1] = something;
            }
        }
    } 
}

fn main() {
    let size: usize = int_input();

    let mut v: Vec<usize> = vec![];

    for _i in 0..size {
        let element = int_input();
        v.push(element);
    }

    sort(&mut v, &size);

    println!("");
    for i in v {
        println!("{}", i);
    }
}
