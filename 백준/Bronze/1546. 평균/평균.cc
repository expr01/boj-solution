#include <iostream>
#include <string>

using namespace std;

int main() {

    int subjectNum;
    cin >> subjectNum;
    int subjectMaxScore = 0;
    int* subjectArr = new int[subjectNum];

    // 최대값 구함 (subjectMaxScore)
    for (int i = 0; i < subjectNum; i++) {
        int score;
        cin >> score;
        subjectArr[i] = score;
        if (subjectMaxScore < score) subjectMaxScore = score;
    }

    // 최대값을 활용해서 새로운 평균을 냄 (점수 / M*100)
    double sum = 0;
    for (int i = 0; i < subjectNum; i++) {
        sum += (double)subjectArr[i] / (double)subjectMaxScore * 100;
    }

    double average = sum / (double)subjectNum;
    cout << average << endl;

    delete[] subjectArr;

    return 0;
}