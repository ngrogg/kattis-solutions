#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int a, b, c, d, max, score, maxScore;
	max = 0;
	maxScore = 0;

	for (int count = 0; count < 5; count++){
		cin >> a >> b >> c >> d;
		score = a + b + c + d;
		if(score > maxScore){
			maxScore = score;
			max      = count + 1;
		} 
	}
	cout << max << " " << maxScore << endl;

	return 0;
}
