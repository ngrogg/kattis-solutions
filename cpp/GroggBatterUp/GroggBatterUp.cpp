// Import statements 
#include <cmath>
#include <cstdlib>
#include <iostream> 

using namespace std; 

// Functions 
double calculate(double input) {

	// Declare numerator to hold sum score
	double num   = 0;

	// Declare variable to hold number of walks 
	double walks = 0;

	// Declare variable to hold individual values
	double score = 0;

	// For loop to sum score	
	for (int count = 0; count < input; count++){
		cin >> score;
		
		// Don't add walks to sum
		if (score >= 0) {
			num += score;
		}
		// score < 0
		else {
			walks += 1; 
		}
	}
	
	// Calculate and return output
	return (num/(input - walks)); 	

}

int main() {
	
	// Declare variable for at bats
	double atBat;

	// Input amount of at bats
	cin >> atBat; 

	// Run function
	cout << calculate(atBat) << endl;

	return 0; 
}
