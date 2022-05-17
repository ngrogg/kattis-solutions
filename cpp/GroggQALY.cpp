#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int iterations;
	cin >> iterations;

	double output, q, y;

	for (int count = 0; count < iterations; count++){
		cin >> q;
		cin >> y;
		output += q * y;
	}
	cout << output << endl;
	return 0;
}
