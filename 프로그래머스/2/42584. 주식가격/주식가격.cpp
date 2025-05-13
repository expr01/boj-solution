#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;

	for (int i = 0; i < prices.size(); i++) {
		int currentValue = prices[i];
		int count = 0;

		for (int j = i + 1; j < prices.size(); j++) {
			if (currentValue <= prices[j]) count++;
			else {
				count++;
				break;
			}
		}

		if (i == prices.size() - 1) {
			answer.push_back(0);
		}
		else {
			answer.push_back(count);
		}
	}	
	return answer;
}