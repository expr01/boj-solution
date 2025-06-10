#include <string>
#include <vector>
#include <map>

using namespace std;
 
int solution(vector<int> array) {
    map<int, int> freq; // 각 값 빈도 저장하는 map (배열의 숫자:등장 횟수)

    // 각 값 빈도 계산
    for (int num : array) {
        freq[num]++;
    }

    // 빈도수 중 최댓값 찾기
    int maxCount = 0; // 가장 큰 빈도 수
    for (const auto& entry : freq) {
        if (entry.second > maxCount) {
            maxCount = entry.second; 
        }
    }

    // 최빈값이 여러 개 있을 경우, maxCount와 동일한 빈도수를 가진 값이 2개 이상이면 -1 반환
    int modeCount = 0;
    int mode = -1;
    for (const auto& entry : freq) {
        if (entry.second == maxCount) {
            modeCount++;
            mode = entry.first;
        }
    }

    // 최빈값이 여러 개 존재하면 -1 반환
    if (modeCount > 1) return -1;
    return mode;
}