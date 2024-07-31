#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // N : 참가자의 수
    // T : 티셔츠 묶음 수, P : 펜 묶음 수
    int N;
    cin >> N;

    int size[6] = { 0 };
    for (int i = 0; i < 6; i++) {
        cin >> size[i];
    }

    int T, P;
    cin >> T >> P;

    int tBundle = 0, pBundle = N / P;
    int pRemain = N % P;

    for (int i = 0; i < 6; i++) {
        if (size[i] % T == 0) {
            tBundle += size[i] / T;
        } else {
            tBundle += (size[i] / T) + 1;
        }
    }

    cout << tBundle << "\n" << pBundle << " " << pRemain;

    return 0;
}