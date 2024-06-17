/* Cold-puter Science
 * My solution to the Kattis problem Cold-puter Science
 * By Nicholas Grogg
 * */

// Import statments 
#include <cstdlib>
#include <iostream>

using namespace std;

// Function to run program 
void runProgram(){
	// Declare variables 
    int iterations, temperatures, negatives;

    // Set negatives to 0 to start 
    negatives = 0;

    // Read in iterations
    cin >> iterations;

    // For loop for reading in and comparing temperatures
    for (int count = 0; count < iterations; count++){
            // Read in temperatures
            cin >> temperatures;

            // Check if temperature is less than 0, iterate negatives by 1
            if (temperatures < 0){
                    negatives += 1;
            }
    }

    // Output negatives
    cout << negatives << endl;
}

int main(){
	// Run program function
	runProgram();
	return 0;
}


