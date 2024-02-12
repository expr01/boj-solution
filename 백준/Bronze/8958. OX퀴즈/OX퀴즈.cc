#include <iostream>
#include <string>

using namespace std;

int main () {
    
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        string problem;
        cin >> problem;
        int sum = 0;
        int count = 0;

        for (int i = 0; i < problem.length(); i++) {       
            if (problem[i] == 'X') {
                count = 0;
            }
            else {
                count++;
                sum += count;
            }
        }
        cout << sum << "\n";
    }

}