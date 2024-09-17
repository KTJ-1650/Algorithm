#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// solution 함수 구현
long long solution(int price, int money, int count) {
    long long totalCost = 0;  // 놀이기구를 타기 위한 총 금액

    // 놀이기구를 1번부터 count번까지 타는데 드는 금액을 계산
    for (int i = 1; i <= count; i++) {
        totalCost += price * i;
    }

    // 부족한 금액을 계산
    long long deficit = totalCost - money;

    // 만약 금액이 부족하지 않으면 0을 반환
    if (deficit <= 0) {
        return 0;
    }

    // 금액이 부족하면 부족한 금액을 반환
    return deficit;
}
