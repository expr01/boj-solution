#include <iostream>

using namespace std;

int main () {

    int year;
    bool isLeapYear = false;
    cin >> year;

    if (year % 4 == 0) {
        isLeapYear = true;
        if (year % 100 == 0) {
            isLeapYear = false;
        }
        if (year % 400 == 0) {
            isLeapYear = true;
        }
    }

    cout << isLeapYear;

    return 0;
}   
