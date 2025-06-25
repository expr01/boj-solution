#include <string>
#include <vector>

using namespace std;

// 파스칼의 삼각형 이용 (nCr = n-1Cr-1 + n-1Cr)
int combination(int n, int r) {
    if (r == 0) return 1;
    if (n == 1) return 1;
    if (r >= n) return 1;
    return combination(n-1, r) + combination(n-1, r-1);
}

int solution(int balls, int share) {
    int answer = 0;
    answer = combination(balls, share);
    return answer;
}