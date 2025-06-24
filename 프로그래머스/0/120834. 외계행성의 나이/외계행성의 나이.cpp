#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string str_age = to_string(age);
    for (int i = 0; i < str_age.length(); i++) {
        answer.push_back(static_cast<char>(str_age[i] - '0' + 'a'));
    }
    return answer;
}