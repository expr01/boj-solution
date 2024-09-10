#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int var1, var2;
    var1 = stoi(to_string(a) + to_string(b));
    var2 = stoi(to_string(b) + to_string(a));
    return (var1 >= var2) ? var1 : var2;
}