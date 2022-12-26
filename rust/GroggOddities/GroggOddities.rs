// Import statements 
use std::io; 

// Main function to run program
fn main() {
    // Keep main minimal, run everything in it's own function
    runProgram();
}

// Function to run program
fn runProgram(){
    // Read in number of iterations
    let mut numIt = String::new();

    // Read in value for numIt
    io::stdin()
        .read_line(&mut numIt)
        .expect("Failed to read input");

    // Transmute input string to int
    let transmuteIt: i32 = numIt.trim().parse().expect("Input not an integer");

    // For loop to iterate from 0 to max iterator value
    for i in 0..transmuteIt{
        // Variable to hold user value 
        let mut inputNum = String::new();

        // Read in value for input number
        io::stdin()
            .read_line(&mut inputNum)
            .expect("Failed to read input");

        // Transmute input string to int
        let transmuteInput: i32 = inputNum.trim().parse().expect("Input not an integer");

        // Check if number odd/even
        if transmuteInput%2==0{
            println!("{} is even",transmuteInput);
        }
        else{
            println!("{} is odd",transmuteInput);
        }
    }
}

