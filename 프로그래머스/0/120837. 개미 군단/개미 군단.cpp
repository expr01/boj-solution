#include <string>
#include <vector>

using namespace std;

// 장군개미: 5, 병정개미: 3, 일개미: 1
int solution(int hp) {
    int count = 0;
    while (hp > 0) {
        if (hp >= 5) {
            hp -= 5;
            count++;
            continue;
        }
        if (hp >= 3) {
            hp -= 3;
            count++;
            continue;
        }
        if (hp >= 1) {
            hp -= 1;
            count++;
            continue;
        }
    }
    return count;
}