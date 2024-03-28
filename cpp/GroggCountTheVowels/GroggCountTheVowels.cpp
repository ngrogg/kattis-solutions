/* Count the Vowels
 * By Nicholas Grogg
 * */

// Import statments 
#include <cstdlib>
#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

// Function to run program 
void runProgram(){
	// Declare variables 
    // Declare unordered map to hold vowels
    unordered_map<char, int> vowels = {
            {'a',1},{'e',2},{'i',3},{'o',4},{'u',5},
            {'A',6},{'E',7},{'I',8},{'O',9},{'U',10}
    };
    // String to hold input variable
    string inputString;

    // Int to count number of vowels
    int vowelCount = 0;

    // Get input line
    getline (cin,inputString);

    // Iterate by char, look for match with map
    for (char c : inputString) {
            // Search for char in map
            auto searchResult = vowels.find(c);
            // If vowel in map increase vowelCount by 1
            if (searchResult != vowels.end()) {
                    vowelCount +=1;
            }
    }

    cout << vowelCount << endl;
}

int main(){
	// Run program function
	runProgram();
	return 0;
}


