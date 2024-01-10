#include <iostream>

using namespace std;

int main () {

    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        for(int j = count - i - 1; j > 0; j--) {
            cout << " ";
        }
        for(int k = 0; k < i + 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}