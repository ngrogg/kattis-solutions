/* Odd Echo
 * By Nicholas Grogg
 * */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to run program
void runProgram(){
	// Declare variables 
	// Variable to hold number of inputs
	int iterations; 
	// String to hold input variables for vector
	string vectorInput;
	// Vector to hold input
	vector<string> words; 

	// Read in number of iterations
	cin >> iterations;

	// For loop to read in variables to vector
	for (int count = 0; count < iterations; count++){
		cin >> vectorInput;
		words.push_back(vectorInput);
	}
	
	// For loop to output vector, iterate count by two
	for (int count = 0; count < iterations; count+=2){
		cout << words[count] << endl;
	}
}

int main(){
	// Run program function
 	runProgram();
	return 0; 
}
