#include <iostream>

using namespace std;

int main () {

    int grades;
    cin >> grades;

    if (grades >= 90 && grades <= 100) {
        cout << 'A';
        return 0;
    }
    else if (grades >= 80 && grades < 90) {
        cout << 'B';
        return 0;
    }
    else if (grades >= 70 && grades < 80) {
        cout << 'C';
        return 0;
    }
    else if (grades >= 60 && grades < 70) {
        cout << 'D';
        return 0;
    }
    else cout << 'F';

    return 0;
}