#include <iostream>

using namespace std;

int main() {

    while (true) {
        double a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) return 0;

        int squaredA = a * a;
        int squaredB = b * b;
        int squaredC = c * c;

        if (squaredC == squaredA + squaredB || squaredB == squaredA + squaredC || squaredA == squaredB + squaredC) {
            cout << "right\n";
        }
        else cout << "wrong\n";
    }

    return 0;
}