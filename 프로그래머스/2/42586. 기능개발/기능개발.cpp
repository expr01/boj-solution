#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int>::iterator ptr = progresses.begin();
    int count = 0;

    while (ptr < progresses.end()) {
        for (int i = 0; i < progresses.size(); i++) {
            progresses[i] += speeds[i];
        }

        while (ptr < progresses.end() && *ptr >= 100) {
            count += 1;
            ptr += 1;
        }

        if (count > 0) {
            answer.emplace_back(count);
            count = 0;
        }
    }

    return answer;
}