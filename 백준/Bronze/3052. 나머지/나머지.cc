#include <iostream>

using namespace std;

int main () {
    int reminder[42] = { 0 };
    int count = 0;

    // 10개의 사용자 입력값을 각각 42로 나눈 값을 배열 인덱스로 지정해 값을 저장
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        int tmp = num % 42;
        reminder[tmp]++;
    }

    // 배열을 하나씩 돌면서 0이 아닌 값을 만날때 count 값을 1씩 증가
    for (int i = 0; i < 42; i++) {
        if (reminder[i] != 0) count++;
    }

    cout << count;

    return 0;
}