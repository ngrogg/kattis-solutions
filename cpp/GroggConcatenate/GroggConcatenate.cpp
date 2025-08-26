/* Grogg Concatenate
 * My solution to the Kattis problem "Concatenate"
 * By Nicholas Grogg
 * */

// Import statments 
#include <cstdlib>
#include <iostream>
#include <string>

// Namespace statements
using std::cin;
using std::cout;
using std::endl;
using std::string;

// Function to run program 
void runProgram(){
    // Declare variables 
    string inputString1, inputString2;

    // Input variables
    cin >> inputString1;
    cin >> inputString2;

    // Output strings together
    cout << inputString1 << inputString2 << endl;

}

int main(){
    // Run program function
    runProgram();
    return 0;
}

