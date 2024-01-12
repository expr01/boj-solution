#include <iostream>
#include <string>

using namespace std;

int main () {

    // 입력 받은 세 수를 곱한 결과값
    int mulNum = 1;
    // 카운트를 하기 위함(0으로 초기화)
    int countNumArr[10] = {};

    for (int i = 0; i < 3; i++) {
        int num = 0;
        cin >> num;
        mulNum *= num;
    }
    
    string zeroNum = to_string(mulNum);

    for (int i = 0; i < 10; i++) {
        countNumArr[zeroNum[i] - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        cout << countNumArr[i] << "\n";
    }

    return 0;
}   
