#include <string>
#include <iostream>

using namespace std;

bool solution(string s) {
    int stack = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') stack++;
        else stack--;
        if (stack < 0) return false;
    }

    return stack == 0;
}