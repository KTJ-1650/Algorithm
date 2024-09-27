#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len은 배열 number의 길이입니다.
int solution(int number[], size_t number_len) {
    int answer = 0;

    // 3개의 숫자를 선택하는 모든 경우의 수를 탐색
    for (size_t i = 0; i < number_len - 2; i++) {
        for (size_t j = i + 1; j < number_len - 1; j++) {
            for (size_t k = j + 1; k < number_len; k++) {
                // 세 숫자의 합이 0인 경우를 찾음
                if (number[i] + number[j] + number[k] == 0) {
                    answer++;
                }
            }
        }
    }

    return answer;  // 삼총사가 될 수 있는 경우의 수 반환
}

int main() {
    int number[] = {-2, 3, 0, 2, -5}; // 예시 배열
    size_t number_len = sizeof(number) / sizeof(number[0]);

    int result = solution(number, number_len);
    printf("삼총사 경우의 수: %d\n", result);  // 출력: 2
    return 0;
}
