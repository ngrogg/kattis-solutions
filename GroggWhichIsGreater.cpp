/* Which is Greater? 
 * By Nicholas Grogg
 * */

#include <iostream>
#include <cstdlib> 

using namespace std; 

int main() {
	// Declare variables 
	int numOne, numTwo;

	// Read in variables 
	cin >> numOne >> numTwo;

	// If numOne > numTwo, output 1
	if (numOne > numTwo ) {
		cout << "1" << endl;
	}
	// Else numTwo > numOne, output 0 
	else {
		cout << "0" << endl;
	}

	return 0;
}
