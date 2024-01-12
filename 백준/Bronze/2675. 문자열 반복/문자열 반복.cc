#include <iostream>
#include <string>

using namespace std;

int main () {

    int testCaseNum;
    cin >> testCaseNum;

    for (int i = 0; i < testCaseNum; i++) {
        int repeatNum = 0;
        string inputStr = "";
        cin >> repeatNum >> inputStr;

        for (int j = 0; j < inputStr.length(); j++) {
            for (int k = 0; k < repeatNum; k++) {
                cout << inputStr[j];
            }
        }
        cout << "\n";
    }

    return 0;
}   
