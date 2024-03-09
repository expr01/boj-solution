#include <iostream>
#include <string>

using namespace std;



int main() {
    //사용자 입력값(0이 앞에 올 수 없음)
    string input;
    
    while(true) {
        cin >> input;
        //종료 조건
        if (input == "0") return 0;
        int i = 0;
        int j = input.length() - 1;
        bool isPalindrome = true;
        //팰린드롬수인지 판별
        while(i < j) {    
            if(input[i] != input[j]) {
                isPalindrome = false;
            }
            i++; 
            j--;
        }
        //팰린드롬수 판별 여부에 따라 출력
        if (!isPalindrome) {
            cout << "no\n";
        }
        else if (isPalindrome){
            cout << "yes\n";
        }
    }
    
    return 0;
}