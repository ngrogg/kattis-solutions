/* Call for Problems
 * Solution for the Kattis problem "Call for Problems"
 * By Nicholas Grogg
 * */

// Import statments 
#include <cstdlib>
#include <iostream>

// Namespace statements
using std::cin;
using std::cout;
using std::endl;

// Function to run program 
void runProgram(){
    // Declare variables 
    int input, iterations, output=0;

    // Read in number of iterations for program loop
    cin >> iterations;

    // For loop to check if number is odd
    for (int count=0; count < iterations; count++) {
            cin >> input;
            if (input % 2 != 0){
                    output += 1;
            }
    }

    // Output final sum of odd numbers 
    cout << output;

}

int main(){
    // Run program function
    runProgram();
    return 0;
}

