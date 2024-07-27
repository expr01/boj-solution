#include <iostream>

using namespace std;

int factorial(int n) {
    if (n < 2) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, k = 0;
    cin >> n >> k;

    int result = factorial(n) / (factorial(k) * factorial(n - k));
    cout << result;

    return 0;
}