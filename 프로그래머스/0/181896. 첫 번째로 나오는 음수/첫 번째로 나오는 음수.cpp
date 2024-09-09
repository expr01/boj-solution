#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list) {
    auto it = find_if(num_list.begin(), num_list.end(), [](int n) { return n < 0; });
    return (it == num_list.end()) ? -1 : (it - num_list.begin());
}