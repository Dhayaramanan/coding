use std::io;

fn fahrenheit_to_celcius(fahr: f64) -> f64 {
    let celcius: f64 = 5.0/9.0 * (fahr - 32.0);

    celcius
}

fn celcius_to_fahrenheit(cel: f64) -> f64 {
    let fahrenheit: f64 = ((9.0/5.0) * cel) + 32.0;

    fahrenheit
}

fn main() {

    //Choice of conversion (cel to fahr or fahr to cel)
    let mut choice = String::new();
    println!("1.Celcius to Fahrenheit");
    println!("2.Fahrenheit to Celcius\n");

    println!("Enter Your choice:");
    io::stdin()
        .read_line(&mut choice)
        .expect("Can't read input");

    let choice: isize = choice
        .trim()
        .parse()
        .expect("Not a number");

    //getting temperature and printing results
    let mut temp = String::new();

    if choice == 1 {
        println!("Enter Celcius:");
        io::stdin()
            .read_line(&mut temp)
            .expect("Can't read input");

        let temp: f64 = temp
            .trim()
            .parse()
            .expect("Not a number");

        let fahr: f64 = celcius_to_fahrenheit(temp);

        println!("Fahrenheit = {}", fahr);
    } else if choice == 2 {

        println!("Enter Fahrenheit:");
        io::stdin()
            .read_line(&mut temp)
            .expect("Can't read input");

        let temp: f64 = temp
            .trim()
            .parse()
            .expect("Not a number");

        let cel: f64 = fahrenheit_to_celcius(temp);

        println!("Celcius = {}", cel);
    } else {
        println!("Please enter a valid option");
    }
}