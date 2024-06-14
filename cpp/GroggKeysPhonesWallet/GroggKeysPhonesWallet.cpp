/* Keys, Phone, Wallet
 * My Solution to the Kattis problem "Keys, Phone, Wallet" 
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
    // Iterations variable for for loop
    int iterations;

    // string for item input
    string input;

    // Boolean values for specific words
    bool keys=false, phone=false, wallet=false;

    // How many items to iterate through?
    cin >> iterations;

    // For loop to read in items and check for input match
    for (int count=0; count<iterations; count++) {
            // Read in input
            cin >> input;

            // Check if input matches, set bool to true if it does
            if (input == "keys"){ 
                    keys=true;
            }
            if (input == "phone"){
                    phone=true;
            }
            if (input == "wallet"){
                    wallet=true;
            }
    }

    // Check bool, output if false
    if(keys == false){
            cout << "keys" << endl; 
    }
    if(phone == false){
            cout << "phone" << endl;
    }
    if(wallet == false){
            cout << "wallet" << endl;
    }

    // Check if all three are true
    if (keys && phone && wallet) {
            cout << "ready" << endl;
    }
}

int main(){
	// Run program function
	runProgram();
	return 0;
}


