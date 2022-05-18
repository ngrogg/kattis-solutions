/* Triangle Area 
 * By Nicholas Grogg
 * */

#include <cstdlib>
#include <iostream>

using namespace std; 

// Function to run the program 
void runProgram(){
	// Declare variables to hold input 
	double base, height; 

	// Read input in 
	cin >> base >> height; 

	// Calculate output variable 
	cout << (base * height) / 2 << endl;
	
}

int main(){
	// Run program
	runProgram();
	return 0; 
}
