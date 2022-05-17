#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
        int numStones;
        cin >> numStones;

        while(numStones > 2) {
                numStones -= 2;
        }

        if(numStones <= 1){
                cout << "Alice" << endl;
        }
        else{
                cout << "Bob" << endl;
        }
        return 0;
}
