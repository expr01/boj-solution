#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, v;
    cin >> a >> b >> v;
    // +1은 마지막날 오르는 A(m)를 의미
    int days = (v - a) / (a - b) + 1;
    // 나머지가 0이 아니라면 A만큼 더 가더라도 모자랄테니 하루가 더 필요함.
    if (((v - a) % (a - b)) != 0) {
        days++;
    }

    cout << days;

    return 0;
}