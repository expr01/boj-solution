#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    unordered_map<string, int> participantCount;

    // 참가자에서
    for (const auto& p : participant) {
        participantCount[p]++;
    }
    // 완주자 빼기
    for (const auto& c : completion) {
        participantCount[c]--;
    }
    // 완주 못한 참가자 찾기
    for (const auto& p : participantCount) {
        if (p.second > 0) {
            return p.first;
        }
    }

    return "";
}