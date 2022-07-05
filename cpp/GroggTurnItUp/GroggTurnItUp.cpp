/* Turn it Up!
 * By Nicholas Grogg 
 * */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// Function to run program 
void runProgram(){
	// Declare Variables 
	// Variable for number of iterations
	int iterations; 
	// Variable for volume position, default value of 7
	int volumePos = 7;
	// String for input
	string userInput; 

	// Read in # of iterations 
	cin >> iterations;

	// For loop 
	for (int count = 0; count <= iterations; count++){
		// Read in user input for userInput
		getline(cin,userInput);

		// If userInput == turn it up
		if (userInput == "Skru op!"){
			// If volumePos < 10, increase volumePos by one
			if (volumePos < 10){
				volumePos += 1;
			}
		}

		// If userInput == turn it down
		if (userInput == "Skru ned!"){
			// If volumePos > 0, decrease volumePos by one
			if (volumePos > 0){
				volumePos -= 1;
			}
		}
	}

	// Output volumePos
	cout << volumePos << endl;
}

int main(){
	// Run Program
	runProgram();
	return 0;
}
