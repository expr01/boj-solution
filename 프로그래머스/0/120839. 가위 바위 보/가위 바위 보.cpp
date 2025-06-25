#include <string>
#include <vector>

using namespace std;

// 가위: 2, 바위: 0, 보: 5
string solution(string rsp) {
    string answer = "";
    for (const auto& rsp: rsp) {
        if (rsp == '2') answer.push_back('0');
        if (rsp == '0') answer.push_back('5');
        if (rsp == '5') answer.push_back('2');
    }
    return answer;
}