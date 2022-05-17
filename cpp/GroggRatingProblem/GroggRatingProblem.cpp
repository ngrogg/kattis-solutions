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
	double numJudges;
	// Variable for the number of judges who already rated problem
	double rated;
	// Variable for the max score 
	double maxScore;
	// Variable for the min score
	double minScore;
	// Variable to hold score values for vector
	double scoreVal;
	// Declare vector to hold the scores 
	vector<double> score;

	// Input numJudges/rated values
	cin >> numJudges >> rated; 

	// For loop to populate vector 
	for (int count = 0; count < rated; count++){
		cin >> scoreVal;
		score.push_back(scoreVal);
	}

	// Check if numJudges=rated
	if (numJudges == rated){
		// Set initial values for min/max score values
		minScore = 0;
		maxScore = 0;
	}
	// numJudges != rated
	else {
		// Set initial values for min/max score values 
		minScore = (numJudges - rated) * -3; 
		maxScore = abs(rated - numJudges) * 3; 
	}

	// Add vector values to min/max score values 
	for (double count =0; count < rated; count++){
		maxScore += score[count];
		minScore += score[count];
	}
	
	// Output score values
	cout << (minScore/numJudges) << " " << (maxScore/numJudges) << endl;
}

int main(){
	// Run program
	run();

	return 0;
}
