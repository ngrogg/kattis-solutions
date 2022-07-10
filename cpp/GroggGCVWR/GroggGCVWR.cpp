/* GCVWR
 * By Nicholas Grogg
 * */

#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

// Function to run program
void runProgram(){
	// Declare variables 
	int gcvwr, truckWeight, numItems, itemWeight, itemWeightSum = 0, towCapacity;

	// Read in variables G, T and N
	cin >> gcvwr >> truckWeight >> numItems;

	// Calculate tow capacity (G-T)*.9
	towCapacity = (gcvwr - truckWeight) * 0.9;

	// Read in item weight and subtract from 
	for(int count = 0; count < numItems; count++){
		cin >> itemWeight;
		itemWeightSum += itemWeight;
	}

	// Output trailer weight not to exceed
	cout << (towCapacity - itemWeightSum) << endl;
}

int main(){
	// Run program function
 	runProgram();
	return 0; 
}
