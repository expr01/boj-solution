#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> seqeunce;
    vector<int> cp_emergency = emergency;
    sort(cp_emergency.begin(), cp_emergency.end());

    for (int i = emergency.size(); i > 0; i--) {
        seqeunce.push_back(i);
    }

    for (auto& e : emergency) {
        for (int i = 0; i < emergency.size(); i++) {
            if (cp_emergency[i] == e) {
                answer.push_back(seqeunce[i]);
            }
        }
    }

    return answer;
}