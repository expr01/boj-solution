#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    if (n > box[0] || n > box[1] || n > box[2]) return 0;
    return (box[0]/n) * (box[1]/n) * (box[2]/n);
}