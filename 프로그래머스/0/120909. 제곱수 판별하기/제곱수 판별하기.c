#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0 && i * i == n) return 1;
    }
    return 2;
}