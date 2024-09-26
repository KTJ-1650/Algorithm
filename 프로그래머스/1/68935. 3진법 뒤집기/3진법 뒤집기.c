#include <stdio.h>

// 3진법 상에서 뒤집힌 값을 10진법으로 변환하는 함수
int solution(int n) {
    int reversed = 0; // 3진법을 뒤집은 값을 저장할 변수
    int base = 1; // 자리수를 계산하기 위한 변수

    // 3진법으로 변환하면서 동시에 뒤집기
    while (n > 0) {
        reversed = reversed * 3 + (n % 3); // 나머지를 reversed에 추가하면서 3진법을 뒤집음
        n /= 3; // n을 3으로 나눈 몫을 저장
    }

    return reversed; // 뒤집힌 값을 10진법으로 변환한 결과
}

int main() {
    int n = 45; // 예시 입력
    int result = solution(n);
    printf("Result: %d\n", result); // 출력: 7 (45를 3진법으로 변환 후 뒤집으면 1200 -> 0021 -> 7)
    return 0;
}
