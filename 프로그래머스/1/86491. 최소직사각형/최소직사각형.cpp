#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> w;
    vector<int> h;

    for (auto& size : sizes) {
        if (size[0] < size[1]) swap(size[0], size[1]);
        w.push_back(size[0]);
        h.push_back(size[1]);
    }

    int maxWidth = *max_element(w.begin(), w.end());
    int maxHeight = *max_element(h.begin(), h.end());
    answer = maxHeight * maxWidth;

    return answer;
}