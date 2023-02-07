use std::io;

fn main() {
    let mut alphabet = String::new();
    io::stdin()
        .read_line(&mut alphabet)
        .expect("Can't read input");
    
    let alphabet: char = alphabet
        .trim()
        .parse()
        .expect("Not a character");
    
    let condition: bool = alphabet == 'A' || alphabet == 'E' || alphabet == 'I' ||
                        alphabet == 'O' || alphabet == 'U';

    if condition {
        println!("Vowel");
    } else {
        println!("Consonant");
    }

}