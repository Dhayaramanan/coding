//if credit score is 750 above can access CRED program (YES)
//else NO

use std::io;

fn main() {
    let mut score = String::new();
    io::stdin()
        .read_line(&mut score)
        .expect("Can't read input");

    let score: u32 = score
        .trim()
        .parse()
        .expect("Error");

    if score >= 750 {
        println!("YES");
    } else {
        println!("NO");
    }
}