#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 문자열을 비교하는 함수 (정렬을 위한 함수)
int compare(const void* a, const void* b) {
    char charA = *(char*)a;
    char charB = *(char*)b;
    
    // 대소문자를 구분해서 내림차순으로 정렬
    if (charA == charB) {
        return 0;
    } else if (charA > charB) {
        return -1;  // a가 b보다 크면 -1을 반환해서 먼저 오도록 한다.
    } else {
        return 1;   // b가 a보다 크면 1을 반환해서 나중에 오도록 한다.
    }
}

// 주어진 문자열을 정렬하는 함수
char* solution(const char* s) {
    size_t len = strlen(s);  // 문자열의 길이를 구함

    // 동적 메모리 할당
    char* answer = (char*)malloc(len + 1);  // 문자열 길이 + null 문자 공간
    strcpy(answer, s);  // 문자열 복사

    // qsort를 이용해 문자열을 정렬 (내림차순)
    qsort(answer, len, sizeof(char), compare);

    return answer;  // 정렬된 결과 반환
}

int main() {
    const char* s = "Zbcdefg";
    char* result = solution(s);

    printf("정렬된 문자열: %s\n", result);  // "gfedcbZ" 출력

    free(result);  // 동적 할당 해제
    return 0;
}
