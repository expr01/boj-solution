#include <iostream>

using namespace std;

int main () {

    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}