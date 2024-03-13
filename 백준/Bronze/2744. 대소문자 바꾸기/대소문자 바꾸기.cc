#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string inputStr;
    cin >> inputStr;
    for (int i = 0; i < inputStr.length(); i++) {
        if('A' <= inputStr[i] && inputStr[i] <= 'Z') {
            inputStr[i] += 32;
        }
        else if('a' <= inputStr[i] && inputStr[i] <= 'z') {
            inputStr[i] -= 32;
        }
    }

    cout << inputStr;

    return 0;
}