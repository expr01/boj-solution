#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    if (*(num_list.end()-1) - *(num_list.end()-2) > 0) {
        num_list.emplace_back(*(num_list.end()-1) - *(num_list.end()-2));
    }
    else {
        num_list.emplace_back(*(num_list.end()-1) * 2);
    }
    
    return num_list;
}