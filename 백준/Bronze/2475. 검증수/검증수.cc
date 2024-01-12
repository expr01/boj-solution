#include <iostream>

using namespace std;

int main () {

    int verifyNum = 0;

    for (int i = 0; i < 5; i++) {
        int num = 0;
        cin >> num;
        verifyNum += (num * num);
    }

    verifyNum = verifyNum % 10;
    cout << verifyNum;

    return 0;
}   