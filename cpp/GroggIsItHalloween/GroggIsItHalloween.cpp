/* IsItHalloween.com
 * By Nicholas Grogg 
 * */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std; 

// Function to run program
void runProgram(){
	// Declare variables 
	string date;

	// Read in variable
	getline(cin,date); 

	// Compare strings 
	// Check if string equals 'OCT 31', output yup
	if (date == "OCT 31"){
		cout << "yup" << endl;
	}
	// Check if string equals 'DEC 25', output yup
	else if(date == "DEC 25"){
		cout << "yup" << endl;
	}
	// Otherwise output 'nope'
	else {
		cout << "nope" << endl;
	}
}

int main(){
	// Run program function
	runProgram(); 
	return 0; 
}
