/* Sort Two Numbers 
 * By Nicholas Grogg
 * */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

// Function to run program
void runProgram(){
	// Declare Variables 
	int input1, input2, tempInt;

	// Read in input
	cin >> input1 >> input2; 

	// Compare/Swap variables
	// If input1 bigger, swap values
	if (input1 > input2){
		tempInt = input1;
		input1  = input2;
		input2  = tempInt;
	}

	// Output variables 
	cout << input1 << " " << input2 << endl;
}

int main(){
	// Run program function
 	runProgram();
	return 0; 
}
