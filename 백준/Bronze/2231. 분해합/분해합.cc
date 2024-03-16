#include <iostream>

using namespace std;

// 분해합 계산 함수
int calculateSumOfDecomposition(int number) {
    int sum = 0;
    // 일의 자리 숫자를 더하고 한 자리씩 줄임
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// 생성자 찾는 함수
int findConstructor(int number) {
    // 1부터 입력값까지 순회하며 생성자를 찾음
    for (int i = 0; i <= number; i++) {
        if (i + calculateSumOfDecomposition(i) == number) {
            return i;
        }
    }
    // 찾지 못한 경우
    return 0;
}

int main() {
    
    int num;
    cin >> num;

    int result = findConstructor(num);
    cout << result << "\n";

    return 0;
}