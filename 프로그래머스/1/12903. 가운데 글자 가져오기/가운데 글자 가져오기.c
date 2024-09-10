#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    int len = strlen(s);  // 문자열의 길이를 구함
    char* answer;
    
    if (len % 2 == 0) { // 짝수일 경우
        answer = (char*)malloc(3);  // 가운데 두 글자를 저장할 공간(2글자 + 널문자)
        answer[0] = s[len / 2 - 1];
        answer[1] = s[len / 2];
        answer[2] = '\0';  // 문자열 종료를 위한 널문자
    } else {  // 홀수일 경우
        answer = (char*)malloc(2);  // 가운데 한 글자를 저장할 공간(1글자 + 널문자)
        answer[0] = s[len / 2];
        answer[1] = '\0';  // 문자열 종료를 위한 널문자
    }
    
    return answer;  // 동적으로 할당된 문자열 반환
}

int main() {
    char* s1 = "hello";
    char* s2 = "abcd";
    
    char* result1 = solution(s1);
    char* result2 = solution(s2);
    
    printf("Result 1: %s\n", result1);  // "l" 출력
    printf("Result 2: %s\n", result2);  // "bc" 출력
    
    free(result1);
    free(result2);
    
    return 0;
}
