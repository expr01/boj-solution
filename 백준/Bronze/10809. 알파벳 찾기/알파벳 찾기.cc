#include <iostream>
#include <string>

using namespace std;

int main () {
    
    // 아스키 코드를 참고해보면 알파벳 a : 97 ~ z : 112(10진수)에 해당.

    string word;
    cin >> word;

    int alphabetPosition[26];

    // -1로 초기화
    for (int i = 0; i < 26; i++) {
        alphabetPosition[i] = -1;
    }

    for (int i = 0 ; i < word.length(); i++) {
        if (alphabetPosition[word[i] - 97] == -1) {
            alphabetPosition[word[i] - 97] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << alphabetPosition[i] << " ";
    }

    return 0;
}