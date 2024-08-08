/* Judging Moose
 * My solution to the Kattis problem "Judging Moose"
 * By Nicholas Grogg
 * */

// Import statments 
#include <algorithm>
#include <cstdlib>
#include <iostream>

using namespace std;

// Function to run program 
void runProgram(){
	// Declare variables 
    int tine1, tine2;

    // Read in variables
    cin >> tine1 >> tine2;

    // Output values
    if (tine1 == 0 && tine2 == 0) {
            cout << "Not a moose" << endl;
    }
    else if (tine1 != tine2) {
            cout << "Odd " << max(tine1,tine2) * 2 << endl;
    }
    else {
            cout << "Even " << max(tine1,tine2) * 2 << endl;
    }
}

int main(){
	// Run program function
	runProgram();
	return 0;
}

