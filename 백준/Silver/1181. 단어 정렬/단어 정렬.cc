#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    // 길이가 같다면 사전순, 길이가 다르다면 짧은순
    if (a.length() == b.length()) {
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;

    string words[n];

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sort(words, words + n, compare);

    for (int i = 0; i < n; i++) {
        // 중복 제거
        if (words[i] == words[i - 1]) {
            continue;
        }
        cout << words[i] << "\n";
    }


    return 0;
}