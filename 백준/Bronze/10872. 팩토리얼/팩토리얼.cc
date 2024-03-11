#include <iostream>

using namespace std;

int factorial(int num) {
    if(num > 1) {
        return num * factorial(num - 1);
    }
    else {
        return 1;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int inputNum;
    cin >> inputNum;
    cout << factorial(inputNum);

    return 0;
}