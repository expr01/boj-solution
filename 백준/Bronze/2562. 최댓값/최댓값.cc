#include <iostream>

using namespace std;

int main () {
    // 번째를 나타냄
    int count;
    // 주어지는 수는 자연수(1~100)이므로 0으로 초기화 해도 괜찮을 듯 함
    int maxNum = 0;
    
    for (int i = 0; i < 9; i++) {
        int inputNum = 0;
        cin >> inputNum;
        if (inputNum > maxNum) {
            maxNum = inputNum;
            count = i + 1;
        }
    }

    cout << maxNum << "\n" << count;

    return 0;
}   