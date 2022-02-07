// Rating Problems
// By Nicholas Grogg

// Include statements
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector> 

using namespace std;

// Functions 
void run(){
	// Variables, all double so they can be re-used
	// Variable for the total number of judges
	double n;
	// Variable for the number of judges who already rated problem
	double k;
	// Variable for the max score 
	double maxScore;
	// Variable for the min score
	double minScore;
	// Variable to hold score values for vector
	double scoreVal;
	// Declare vector to hold the scores 
	vector<double> score;

	// Input n/k values
	cin >> n >> k; 

	// For loop to populate vector 
	for (int count = 0; count < k; count++){
		cin >> scoreVal;
		score.push_back(scoreVal);
	}

	// Check if n=k
	if (n == k){
		// Set initial values for min/max score values
		minScore = 0;
		maxScore = 0;
	}
	// n != k
	else {
		// Set initial values for min/max score values 
		minScore = (n - k) * -3; 
		maxScore = abs(k - n) * 3; 
	}

	// Add vector values to min/max score values 
	for (double count =0; count < k; count++){
		maxScore += score[count];
		minScore += score[count];
	}
	
	// Output score values
	cout << (minScore/n) << " " << (maxScore/n) << endl;
}

int main(){
	// Run program
	run();

	return 0;
}
