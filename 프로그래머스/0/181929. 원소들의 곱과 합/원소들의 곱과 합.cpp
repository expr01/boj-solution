#include <cmath>
#include <numeric>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    return (accumulate(num_list.begin(), num_list.end(), 1, multiplies<int>()) >
        pow((accumulate(num_list.begin(), num_list.end(), 0)), 2)) ? 0 : 1;
}