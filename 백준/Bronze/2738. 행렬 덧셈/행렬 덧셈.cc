#include <iostream>
#include <algorithm>

using namespace std;

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // 배열의 크기
    int n, m;
    cin >> n >> m;

    int** arr1 = new int*[n];
    for (int i = 0; i < n; i++) {
        arr1[i] = new int[m];
    }

    int** arr2 = new int*[n];
    for (int i = 0; i < n; i++) {
        arr2[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << "\n";
    }

    delete[] arr1;
    delete[] arr2;

    return 0;
}