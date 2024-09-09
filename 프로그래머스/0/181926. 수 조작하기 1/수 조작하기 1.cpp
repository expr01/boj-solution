#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for (char& str : control) {
        if (str == 'w') n++;
        if (str == 's') n--;
        if (str == 'd') n += 10;
        if (str == 'a') n -= 10;
    }

    return n;
}