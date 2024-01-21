#include <iostream>
#include <vector>

using namespace std;

int main () {

    int testCase;
    int minNum = 10000001;
    int maxNum = -10000001;
    cin >> testCase;
    vector<int> arr(testCase);

    for (int i = 0; i < testCase; i++) {
        cin >> arr[i];
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }

    cout << minNum << " " << maxNum;

    return 0;
}   
