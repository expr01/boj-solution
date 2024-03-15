#include <iostream>
#include <string>

using namespace std;

int main() {

    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++) {
        string inputStr;
        cin >> inputStr;
        cout << inputStr[0] << inputStr[inputStr.length() - 1] << "\n";
    }

    return 0;
}