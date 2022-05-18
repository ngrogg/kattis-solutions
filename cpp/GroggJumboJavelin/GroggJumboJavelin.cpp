/* Jumbo Javelin
 * By Nicholas Grogg 
 * */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std; 

// Function to run program 
void runProgram(){
	// Declare variables, set inital values 
	int iterations, rodLength, sum, lostLength; 
	sum = 0; 

	// Read in iterations
	cin >> iterations; 
	lostLength = iterations - 1; 
	
	// Read in rod lengths and calculate values 
	for (int count = 0; count < iterations; count++){
		cin >> rodLength; 
		sum += rodLength;
	}

	// Output final value
	cout << sum - lostLength << endl; 
}

int main(){
	// Run program function
 	runProgram();
	return 0; 
}
