#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int num = 4; num <= n; num++) { // 0, 1, 2, 3은 합성수가 될 수 없으므로 4부터
        vector<int> divisor;
        for (int i = 1; i <= num; i++) { // num까지 반복하면서 약수를 전부 divisor 배열에 저장
            if (num % i == 0) {
                divisor.push_back(i);
            }
        }
        if (divisor.size() >= 3) answer++;
    }

    return answer;
}