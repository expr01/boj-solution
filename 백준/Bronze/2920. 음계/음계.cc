#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int scales[8] = { 0 };
    int scale = 0;

    for (int i = 0; i < size(scales); i++) {
        cin >> scale;
        scales[i] = scale;
    }

    // 첫 시작이 1이 아니거나 8이 아니면 mixed임
    if (scales[0] != 1 && scales[0] != 8) {
        cout << "mixed";
        return 0;
    }

    int checkAsc = 1;
    int checkDes = size(scales);
    for (int i = 0; i < size(scales); i++) {
        // 1로 시작하거나 8로 시작했지만 검사하는 숫자와 같지 않으면 mixed임
        if (scales[0] == 1 && scales[i] != checkAsc) {
            cout << "mixed";
            return 0;
        }

        if (scales[0] == size(scales) && scales[i] != checkDes) {
            cout << "mixed";
            return 0;
        }
        checkAsc++;
        checkDes--;
    }

    if (scales[0] == 1) cout << "ascending";
    if (scales[0] == size(scales)) cout << "descending";    

    return 0;
}
