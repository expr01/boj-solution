#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (int i = 0; i < commands.size(); i++) {
        int startIndex = commands[i][0] - 1;
        int endIndex = commands[i][1] - 1;
        vector<int> sliced(array.begin() + startIndex, array.begin() + endIndex + 1);
        sort(sliced.begin(), sliced.end());
        answer.emplace_back(sliced[commands[i][2] - 1]);
    }

    return answer;
}
