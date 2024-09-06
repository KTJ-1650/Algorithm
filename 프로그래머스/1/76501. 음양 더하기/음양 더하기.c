#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
   int answer = 0;

    // absolutes_len과 signs_len이 같은 길이로 주어진다고 가정
    for (size_t i = 0; i < absolutes_len; i++) {
        // signs[i]가 true이면 양수, false이면 음수로 변환하여 합산
        if (signs[i]) {
            answer += absolutes[i];
        } else {
            answer -= absolutes[i];
        }
    }

    return answer;
}