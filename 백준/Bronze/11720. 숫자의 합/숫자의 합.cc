#include <iostream>
#include <string>

using namespace std;

int main () {

    int testCase;
    cin >> testCase;
    int sum = 0;
    string inputNum;
    cin >> inputNum;
    // 공백이 없어 문자열로 입력받아 배열을 돌며 숫자로 변환하여 더함.

    for (int i = 0; i < testCase; i++) {
        sum += inputNum[i] - '0';
    }

    cout << sum;

    return 0;
}   
