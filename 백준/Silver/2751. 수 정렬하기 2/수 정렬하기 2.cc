#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> vec;

    // 값 입력 (중복 x)
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        vec.push_back(number);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++) {
        cout << vec[i] << "\n";
    }

    return 0;
}