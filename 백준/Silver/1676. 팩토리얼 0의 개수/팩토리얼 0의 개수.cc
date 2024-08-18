#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    // 2의 배수, 5의 배수 곱 한쌍이 존재하면 뒤에 0하나가 생기는걸로 보임.
    // 5의 배수의 개수는 2의 배수의 개수보다 항상 적기에 5의 배수 개수만 세면 됨.
    int mulOfFive = 0;

    // 하나씩 세면서 5의 배수를 구하는 방식을 사용했는데, 5의 배수만 세면되므로 무의미함.
    // for (int i = 1; i <= n; i++) {
    //     if (i % 5 == 0)
    //     {
    //         mulOfFive++;
    //     }
    // }

    // 5의 배수만 세면서, 거듭제곱일 때도 계산
    for (int i = 5; i <= n; i *= 5) {
        mulOfFive += n / i;
    }

    cout << mulOfFive;

    return 0;
}