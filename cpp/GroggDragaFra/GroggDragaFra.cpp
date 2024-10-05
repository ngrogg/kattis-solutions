/* Grogg Draga Fra
 * My solution to the Kattis problem Dragra Fra
 * By Nicholas Grogg
 * */

// Import statments 
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

// Function to run program 
void runProgram(){
	// Declare variables 
    int coveredWindows, openWindows;

    // Read in variables
    cin >> coveredWindows >> openWindows;

    // Output difference
    cout << coveredWindows - openWindows << endl;
}

int main(){
	// Run program function
	runProgram();
	return 0;
}

