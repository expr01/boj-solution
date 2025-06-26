#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int idx = 0;

    // 1명 건너뛰고 다음 사람
    // 반복문 한번 돌 때마다 배열의 길이로 나눈 나머지를 이용해 인덱스를 계속 도는 것처럼 계산
    for (int i = 1; i <= k-1; i++) {
        idx = (idx + 2) % numbers.size();
    }
    
    return numbers[idx];
}