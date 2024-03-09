#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int convertFromStringToInt(char c) {
    return (int)c - 96;
}

int main() {

    int strLength;
    cin >> strLength;
    string inputStr;
    cin >> inputStr;
    // 입력값은 모두 알파벳 소문자로 구성
    // r = 31, M = 1234567891
    // a ~ z 까지 문자열에 항에 대한 번호i를 r의i제곱으로 나타내서 해당 항 번호에 곱한다. 즉 31의 i제곱
    int r = 31;
    int M = 1234567891;
    int sum = 0;

    for (int i = 0; i < strLength; i++) {
        sum += convertFromStringToInt(inputStr[i]) * (int)pow(r, i);
    }

    cout << sum % M << endl;

    return 0;
}