#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a_len은 배열 a의 길이입니다.
// b_len은 배열 b의 길이입니다.
int solution(int a[], size_t a_len, int b[], size_t b_len) {
    // 내적을 저장할 변수
    int answer = 0;

    // 배열 a와 b의 길이가 같으므로 a_len만 확인하면 됩니다.
    for (size_t i = 0; i < a_len; i++) {
        // 내적 계산: a[i] * b[i]의 합
        answer += a[i] * b[i];
    }

    return answer;
}