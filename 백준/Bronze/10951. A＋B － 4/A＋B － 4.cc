#include <iostream>

using namespace std;

int main () {

    int a, b;
    // eof() 함수를 사용하여 작성하려고 했으나 
    // 사용자에게 키보드로 입력받는 경우는 적절하지 않음.
    // 따라서 fail() 함수를 사용하여 입력이 실패했는지 확인
    // EOF(End of File)까지 계속 입력을 받음
    while (cin >> a >> b) {
        cout << a + b << endl;
    }

    return 0;
}   
