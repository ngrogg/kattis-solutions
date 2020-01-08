#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int position, numQ, timeUsed, boomPos;
	int timeLimit   = 210;
	int timeElapsed = 0;
	bool boom = false;
	char answer;
	cin >> position >> numQ;

	for (int i = 0; i < numQ; i++) {
		cin >> timeUsed >> answer;
		timeElapsed += timeUsed;
		// use bool to only allow box to explode once
		if(timeElapsed > timeLimit && boom == false){
			boomPos = position;
			boom    = true;
		}
		// If user answered correctly advance position
		if (answer == 'T'){
			if (position == 8){
				position  = 1;
			}
			else {
				position += 1;
			}
		}
	}
	cout << boomPos << endl;

	return 0;
}
