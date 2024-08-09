#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    int number = 665;

    while (n != count) {
        number++;
        // 연속으로 666이 나오는 숫자인지 판별
        if (to_string(number).find("666") != string::npos) {
            count++;
        }
    }

    cout << number;

    return 0;
}