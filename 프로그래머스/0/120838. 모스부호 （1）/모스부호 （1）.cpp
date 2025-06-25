#include <string>
#include <vector>

using namespace std;

string solution(string letter) {
    vector<pair<string, char>> morse = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'}, {"..-.", 'f'},
        {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
        {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},
        {"...", 's'}, {"-", 't'}, {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
        {"-.--", 'y'}, {"--..", 'z'}
    };
    string answer = "";
    string morse_str = "";

    // 주어진 공백으로 나누어진 문자열을 돌면서 공백을 만나면 공백 전까지를 하나의 문자열에 담아 morse와 비교해서 영어로 바꿈
    for (int i = 0; i <= letter.size(); i++) {
        if (letter[i] == ' ' || i == letter.size()) {
            for (const auto& pair: morse) { // morse 코드와 대응되는 문자찾기
                if (pair.first == morse_str) {
                    answer.push_back(pair.second);
                    break;
                }
            }
            morse_str = "";
        }
        else morse_str.push_back(letter[i]);
    }
    
    return answer;
}