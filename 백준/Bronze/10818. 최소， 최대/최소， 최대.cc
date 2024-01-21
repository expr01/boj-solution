#include <iostream>

using namespace std;

int main () {

    int testCase;
    int minNum = 10000001;
    int maxNum = -10000001;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int inputNum = 0;
        cin >> inputNum;
        if (inputNum < minNum) {
            minNum = inputNum;
        }
        if (inputNum > maxNum) {
            maxNum = inputNum;
        }
    }

    cout << minNum << " " << maxNum;

    return 0;
}   