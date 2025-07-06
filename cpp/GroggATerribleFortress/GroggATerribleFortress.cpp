/* A Terrible Fortress
 * My Solution to the problem "A Terrible Fortress"
 * By Nicholas Grogg
 * */

// Import statments 
#include <cstdlib>
#include <iostream>

// Namespace statements
using std::cout;
using std::cin;
using std::endl;

// Function to run program 
void runProgram(){
    // Declare variables 
    int iterations, sum = 0, blazes; 

    // Read in number of iterations
    cin >> iterations;

    // Read in number of blazes per section, add to sum
    for (int count = 0; count < iterations; count++) {
            cin >> blazes;
            sum += blazes;
    }

    // Output sum of blazes
    cout << sum << endl;
}

int main(){
    // Run program function
    runProgram();
    return 0;
}

