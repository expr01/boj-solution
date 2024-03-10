#include <iostream>

using namespace std;

int main() {

    int inputNum;
    int count = 1;
    // 벌집 한 겹이 처음 시작되는 수임. 1은 가장 가운데이므로 제외 count를 1로 함.
    // 벌집이 한 겹 증가할 때 마다 둘러지는 수의 범위가 6씩 증가하고 있음. 2~7, 8~19, ... 이런 식.
    int startNum = 2;
    int incNum = 6;
    cin >> inputNum;

    while (inputNum >= startNum) {
        startNum += incNum;
        incNum += 6;
        count++;
    }

    cout << count;

    return 0;
}