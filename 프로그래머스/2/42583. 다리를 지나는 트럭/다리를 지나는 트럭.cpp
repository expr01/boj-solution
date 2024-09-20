#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int time = 0; // 시간
	queue<int> truckOnBridge; // 다리 위 트럭
	queue<int> waitingTrucks; // 대기 트럭
	int currentBridgeWeight = 0; // 다리 하중

	// 대기하는 트럭 vector를 queue로 변환
	for (const auto& weight : truck_weights) {
		waitingTrucks.push(weight);
	}
	
	// 대기 트럭이 없을 때까지 반복
	while (!waitingTrucks.empty()) {
		time++; // 1초

		// 다리 위 트럭이	다리 길이 초과하면 제거
		if (truckOnBridge.size() == bridge_length) {
			currentBridgeWeight -= truckOnBridge.front();
			truckOnBridge.pop();
		}

		// 대기 트럭이 다리에 올라갈 수 있는지 확인
		if (currentBridgeWeight + waitingTrucks.front() <= weight) {
			truckOnBridge.push(waitingTrucks.front());
			currentBridgeWeight += waitingTrucks.front();
			waitingTrucks.pop();
		}
		// 최대 하중으로 인해 트럭이 다리에 올라가지 못하는 경우
		// 다리 위 트럭이 건널 때까지 0을 집어넣어서 time++가 실행
		else {
			truckOnBridge.push(0);
		}
	}
	// 마지막 트럭은 건너는 시간이 포함 안돼서 bridge_length만큼 더해줌
	return time + bridge_length;
}