/* Reduplication
 * My solution to the Kattis problem Reduplication
 * By Nicholas Grogg
 * */

// Import statments 
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// Function to run program 
void runProgram(){
	// Declare variables 
    // String for input and output variables
    string inputString, outputString;
    // Int for number of iterations
    int count;

    // Read in string to duplicate
    cin >> inputString;

    // Read in number of iterations
    cin >> count;

    // For loop to append inputString to outputString by count number of times
    for (int i = 0; i < count; i++) {
            outputString += inputString;
    }

    // Output resulting string
    cout << outputString << endl;

}

int main(){
	// Run program function
	runProgram();
	return 0;
}

