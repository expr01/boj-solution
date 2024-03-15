#include <iostream>

using namespace std;

long long int newOperator(const long long int a, const long long int b) {
    return (a + b) * (a - b);
}

int main() {

    long long int a, b;
    cin >> a >> b;
    cout << newOperator(a, b);

    return 0;
}