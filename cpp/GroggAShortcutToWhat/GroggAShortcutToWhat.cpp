/* A Shortcut to What? 
 * My solution to the problem "A Shortcut to What?" 
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
    int inputValue;

    // Read in value
    cin >> inputValue;

    // Calculate value
    inputValue += 5;
    inputValue *= 3;
    inputValue -= 10;
    cout << inputValue << endl;
}

int main(){
	// Run program function
	runProgram();
	return 0;
}

