#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int iterations, miles, hours, hoursReal, hoursPrev, mileSum;

	while (iterations != -1){
		// Reset values
		hoursReal  = 0;
		mileSum   = 0;
		hoursPrev = 0;

		cin >> iterations;

		for (int count = 0; count < iterations; count++){
			cin >> miles >> hours;
			hoursReal  = hours - hoursPrev;
			hoursPrev  = hours;
			mileSum   += miles * hoursReal;
		}
		if (iterations != -1){
			cout << mileSum << " miles" << endl;
		}
	}
	return 0;
}
