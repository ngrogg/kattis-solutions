/* Filip
 * By Nicholas Grogg
 * */

#include <iostream>
#include <cstdlib>

using namespace std;

// Function to reverse a number 
int reversal(int input){
	// Declare variables 
	int remainder, reversedNumber = 0;
	
	// Reverse int variable 
	while (input != 0){
		remainder      = input % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		input         /= 10;
	}

	return reversedNumber;
}

// Function to run program
void runProgram(){
	// Declare variables 
	int numOne, numTwo, numOneReverse, numTwoReverse;

	// Read in variables
	cin >> numOne >> numTwo;

	// Reverse variables and assign them
	numOneReverse = reversal(numOne);
	numTwoReverse = reversal(numTwo);

	// If numOneReverse > numTwoReverse, output numOneReverse
	if (numOneReverse > numTwoReverse) {
		cout << numOneReverse << endl;
	}

	// Else, output numTwoReverse
	else {
		cout << numTwoReverse << endl;
	}
}

int main(){

	// run program
	runProgram();
	return 0;
}
