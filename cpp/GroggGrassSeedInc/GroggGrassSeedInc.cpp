/* Grass Seed Inc
 * By Nicholas Grogg
 * */

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

// Function to run program 
void runProgram(){
	// Declare variables
	int numLawns;
	double seedCost, lawnWidth, lawnHeight; 
	long double costSum = 0.0;

	// Read in cost of seeds
	cin >> seedCost;

	// Read in number of lawns
	cin >> numLawns;

	// For loop to calculate cost of lawns
	for (int count = 0; count < numLawns; count++){
		// Read in lawn size
		cin >> lawnWidth >> lawnHeight;
		// Add cost to running sum
		costSum += seedCost * (lawnWidth * lawnHeight);
	}

	// Ouput sum, used fixed to force decimal output
	cout << fixed;
	cout << setprecision(7) << costSum << endl;
}

int main(){
	// Run program function
	runProgram();
	return 0;
}
