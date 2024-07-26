#include <iostream>

using namespace std;

int solution(const int a, const int b) {

    if (a == 0) {
        return b;
    }
    if (b == 1) {
        return 1;
    }

    return solution(a - 1, b) + solution(a, b - 1);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        // a >= 0, b > 0, a층의 b호
        int a, b;
        cin >> a;
        cin >> b;
        cout << solution(a, b) << "\n";
    }

    return 0;
}