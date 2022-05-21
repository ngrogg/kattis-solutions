/* Jack O' Lantern Juxtaposition 
 * by Nicholas Grogg 
 * */

#include <cstdlib>
#include <iostream>

using namespace std; 

// Function to run program 
void runProgram(){
	// Declare variables to hold nose, eye and mouth designs
	int nose, eye, mouth;

	// Read in values for nose eye and mouth
	cin >> eye >> nose >> mouth;
	
	// Output answer 
	cout << (nose * eye * mouth) << endl;
}

int main(){
	// Run program in function
	runProgram();
	return 0;
}
