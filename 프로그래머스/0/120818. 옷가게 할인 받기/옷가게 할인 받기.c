#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0;
    double dc = 0;
    if (price >= 100000) {
        dc = 0.05;
    }
    if (price >= 300000) {
        dc = 0.1;
    }
    if (price >= 500000) {
        dc = 0.2;
    }

    answer = price - price*dc;
    
    return answer;
}