// C++ Solution to I've been Everywhere, Man
// Nicholas Grogg 

// Import statements 
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <set>
#include <string>

using namespace std;

// Functions 
void calcUniqueStrings(){
	// Declare varibles
	// Variable for how many loops 
	int loops;
	
	// Varible for how many iterations per loop
	int iterations;
	// Variable to hold input string
	string city;

	// Declare set for strings 
	set<string> uniqueCities;

	// Assign value to loops
	cin >> loops; 	

	// For loop for loops
	for (int count = 0; count < loops; count++){
		// Assign value to iterations 
		cin >> iterations;

		// For loop for iterations
		for (int count = 0; count < iterations; count++){
			cin >> city;
			uniqueCities.insert(city);
		}

		// Output size of set 
		cout << uniqueCities.size() << endl;

		// Truncate set 
		uniqueCities.erase(uniqueCities.begin(), uniqueCities.end());
	}
}
int main(){

	// Run program
	calcUniqueStrings();

	return 0;
}
