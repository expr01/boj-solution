#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    int dir = 0;
    if (direction == "right") dir = numbers.size()-1;
    if (direction == "left") dir = 1;
    for (int i = 0; i < numbers.size(); i++) {
        answer.push_back(numbers[(i+dir)%numbers.size()]);
    }
    return answer;
}