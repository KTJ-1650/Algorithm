#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // "수박"의 패턴은 2글자씩 반복되므로 n * 3 (한글은 3바이트) + 1 (null termination) 크기의 메모리를 할당
    char* answer = (char*)malloc(n * 3 + 1);
    
    // 문자열을 차례대로 채우기
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // 짝수 인덱스일 때 "수" 추가
            strcpy(answer + i * 3, "수");
        } else {
            // 홀수 인덱스일 때 "박" 추가
            strcpy(answer + i * 3, "박");
        }
    }
    
    // 마지막에 null 종료 문자를 추가
    answer[n * 3] = '\0';

    return answer;
}

int main() {
    int n = 3;
    char* result = solution(n);
    printf("%s\n", result); // "수박수" 출력
    free(result); // 동적 할당된 메모리 해제

    n = 4;
    result = solution(n);
    printf("%s\n", result); // "수박수박" 출력
    free(result); // 동적 할당된 메모리 해제

    return 0;
}
