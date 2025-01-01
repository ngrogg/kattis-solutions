/* Decimal Delection
 * My Solution to the Kattis problem Decimal Deletion
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
    double inputNum;

    // Read in inputNum
    cin >> inputNum;

    // Output rounded number
    cout << round(inputNum) << endl;
}

int main(){
	// Run program function
	runProgram();
	return 0;
}

