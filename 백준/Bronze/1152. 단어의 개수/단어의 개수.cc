#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    // cin >> str은 공백을 포함하지 못하므로
    // 공백을 포함하는 getline() 함수로 처리.
    getline(cin, str);
    int wordCount = 0;
    // // 문자열에 연속적인 공백은 없음.
    // // 문자열이 공백으로 시작하거나 끝나는 경우 처리
    // // 양쪽 다 공백인 경우가 있으므로 else if로 처리하진 않음.
    // if (str[0] == ' '){
    //     wordCount--;
    // }
    // if (str[str.length() - 1] == ' ') {
    //     wordCount--;
    // }
    // // 위의 조건을 통과하고 공백 개수를 셈
    // for (int i = 0; i < str.length(); i++) {
    //     if (str[i] == ' ') {
    //         wordCount++;
    //     }
    // }

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            wordCount++;
        }
    }
    if (str[0] == ' '){
        wordCount--;
    }
    if (str[str.length() - 1] == ' ') {
        wordCount--;
    }

    // 공백의 개수 + 1 == 단어의 개수
    cout << wordCount + 1;

    return 0;
}