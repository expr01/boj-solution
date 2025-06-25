#include <string>
#include <vector>

using namespace std;

// 장군개미: 5, 병정개미: 3, 일개미: 1
int solution(int hp) {
    int count = 0;
    
    count += hp / 5;
    hp %= 5;

    count += hp / 3;
    hp %= 3;

    count += hp / 1;

    return count;
}