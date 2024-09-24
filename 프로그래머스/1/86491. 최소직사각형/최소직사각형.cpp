#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> width;
    vector<int> height;

    for (auto& size : sizes) {
        if (size[0] < size[1]) swap(size[0], size[1]);
        width.push_back(size[0]);
        height.push_back(size[1]);
    }

    int maxWidth = *max_element(width.begin(), width.end());
    int maxHeight = *max_element(height.begin(), height.end());
    answer = maxHeight * maxWidth;

    return answer;
}