#include <iostream>

using namespace std;

int newOperator(const int a, const int b) {
    return (a + b) * (a - b);
}

int main() {

    int a, b;
    cin >> a >> b;
    cout << newOperator(a, b);

    return 0;
}