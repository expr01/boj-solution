#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int time = 0; // 시간
	queue<int> truckOnBridge; // 다리 위 트럭
	queue<int> waitingTrucks; // 대기 트럭
	int currentBridgeWeight = 0; // 다리 하중	

	for (const auto& weight : truck_weights) {
		waitingTrucks.push(weight);
	}

	while (!waitingTrucks.empty()) {
		time++;

		if (truckOnBridge.size() == bridge_length) {
			currentBridgeWeight -= truckOnBridge.front();
			truckOnBridge.pop();
		}

		if (currentBridgeWeight + waitingTrucks.front() <= weight) {
			truckOnBridge.push(waitingTrucks.front());
			currentBridgeWeight += waitingTrucks.front();
			waitingTrucks.pop();
		}
		else {
			truckOnBridge.push(0);
		}
	}

	return time + bridge_length;
}