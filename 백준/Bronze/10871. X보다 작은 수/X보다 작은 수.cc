#include <iostream>

using namespace std;

int main () {
    
    int testCase, cmpNum;
    cin >> testCase >> cmpNum;
    for (int i = 0; i < testCase; i++) {
        int inputNum;
        // cin >> inputNum;
        // if (inputNum < cmpNum) {
        //     cout << inputNum << " ";
        // }

        if(cin >> inputNum && inputNum < cmpNum) {
            cout << inputNum << " ";
        }
    }

    return 0;
}
