#include <iostream>
#include <algorithm>

using namespace std;

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int inputArr[28];
    bool arr[31] = { false };

    for (int i = 0; i < 28; i++) {
        cin >> inputArr[i];
        arr[inputArr[i]] = true;
    }

    for (int i = 1; i < 31; i++) {
        if (!arr[i]) {
            cout << i << "\n";
        }
    }

    return 0;
}