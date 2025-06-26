#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (const auto& str : my_string) {
        if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u') continue;
        answer.push_back(str);
    }
    return answer;
}