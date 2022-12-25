// Import statements 
use std:io; 

fn main() {
    // Keep main minimal
    runProgram();
}

// Function to run program
fn runProgram(){
    // Variable to hold user value 
    let mut inputNum = String::new();
    // Read in value 
    io::stdin()
        .read_line(&mut inputNum);
        .expect("Failed to read input");
    // Check if number odd/even
    // TODO
}

