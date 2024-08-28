#include <iostream>
#include <algorithm>

using namespace std;

struct Coord {
    int x; // x 좌표
    int y; // y 좌표
};

// 비교 함수
bool compare(const Coord &a, const Coord &b) {
    if (a.y == b.y) {
        return a.x < b.x; // x가 같으면 y로 정렬
    }
    return a.y < b.y; // x로 정렬
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; 
    cin >> n;

    // 좌표 구조체 배열 선언
    Coord coord[n];

    for (int i = 0; i < n; i++) {
        cin >> coord[i].x >> coord[i].y;
    }

    sort(coord, coord + n, compare);
    
    for (int i = 0; i < n; i++) {
        cout << coord[i].x << " " << coord[i].y << "\n";
    }

    return 0;
}