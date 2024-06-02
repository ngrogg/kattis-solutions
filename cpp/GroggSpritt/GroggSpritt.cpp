/* Spritt
 * My solution to the Kattis problem Spritt
 * By Nicholas Grogg
 * */

// Import statments 
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

// Function to run program 
void runProgram(){
	// Declare variables 
    int countVar, bottleCount, classroomBottles;

    // Read in values
    cin >> countVar >> bottleCount;

    // For loop to read in bottles for classroom and subtract from the total bottlecount
    for (int count=0; count < countVar; count++){
            cin >> classroomBottles;
            bottleCount-=classroomBottles;
    }

    // If classroomBottles > 0, output Jebb
    if (bottleCount >= 0){
            cout << "Jebb" << endl;
    }
    // Else output Neibb
    else {
            cout << "Neibb" << endl;
    }
}

int main(){
	// Run program function
	runProgram();
	return 0;
}

