#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int testCase;
    cin >> testCase;
    int arr[101];
    int v;
    for (int i = 0; i < testCase; i++) {
        cin >> arr[i];
    }
    cin >> v;

    int count = 0;
    for (int i = 0; i < testCase; i++) {
        if (arr[i] == v) count++;
    }

    cout << count;

    return 0;
}