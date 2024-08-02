#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count = 0;

    for (int i = 0; i < N; i++) {
        int input = 0;
        cin >> input;

        if (input < 2) continue;
        bool isPrime = true;
        for (int j = 2; j < input; j++) {
            if (input % j == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            count++;
        }
    }

    cout << count;

    return 0;
}