#include <iostream>

using namespace std;

int main() {

    // 입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점
    // 따라서 다음과 같은 방식을 사용
    // 단, 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 됨
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int a, b;
        cin >> a >> b;

        cout << a + b << "\n";
    }

    return 0;
}