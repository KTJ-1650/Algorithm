#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 약수의 개수를 구하는 함수
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

// solution 함수 구현
int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; i++) {
        int divisors = countDivisors(i); // i의 약수 개수 계산

        if (divisors % 2 == 0) {
            // 약수의 개수가 짝수면 더함
            answer += i;
        } else {
            // 약수의 개수가 홀수면 뺌
            answer -= i;
        }
    }

    return answer;
}
