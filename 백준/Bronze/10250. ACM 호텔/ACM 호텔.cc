#include <iostream>

using namespace std;

int main () {
    int testCase, height, width, num;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> height >> width >> num;
        //아래에서 위로 왼쪽에서 오른쪽 순서대로 호수가 정해짐
        int firstNum, lastNum;

        //가장 마지막 층에 배정될 때를 따로 처리
        if (num >= height && (num % height == 0)) {
            lastNum = (num / height);
            firstNum = height;
        }
        else {
            lastNum = (num / height) + 1;
            firstNum = (num % height);
        }
        if (lastNum >= 10) {
            cout << firstNum << lastNum << "\n";
        }
        else {
            cout << firstNum << 0 << lastNum << "\n";
        }
    }
    return 0;
}
