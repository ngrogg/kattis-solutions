/* Finding An A
 * By Nicholas Grogg
 * */

// Import statments 
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// Function to run program 
void runProgram(){
	// Declare variables 
    // String to hold input 
    string inputString;
    // Variable to hold string after match
    string resultString;
    // Char to match
    char matchChar = 'a';
    // Bool to check if char matches
    bool matchBool = false;

    cin >> inputString;

    for (char c : inputString) {
            // If matchBool true, append char to string
            if (matchBool) {
                    resultString += c;
            }
            if (c == matchChar) {
                    matchBool = true;
            }

    }

    cout << matchChar << resultString;

}

int main(){
	// Run program function
	runProgram();
	return 0;
}


