#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    vector<string> grades = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D+", "D0", "D-", "F"};
    vector<double> scores = {4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0};

    string grade;
    cin >> grade;

    for (int i = 0; i < grades.size(); i++) {
        if (grade == grades[i]) {
            cout << fixed << setprecision(1) << scores[i] << "\n";
            break;
        }
    }

    return 0;
}