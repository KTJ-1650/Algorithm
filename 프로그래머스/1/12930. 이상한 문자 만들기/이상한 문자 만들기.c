#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // 입력 문자열의 길이 계산
    int len = strlen(s);
    
    // 결과를 저장할 문자열 동적 할당 (입력 문자열과 동일한 크기)
    char* answer = (char*)malloc(len + 1); // 널 문자를 위한 +1
    
    int word_index = 0; // 단어 내에서의 인덱스(짝수/홀수 판단용)

    // 입력 문자열을 한 글자씩 탐색
    for (int i = 0; i < len; i++) {
        // 공백 문자인 경우 word_index를 초기화
        if (s[i] == ' ') {
            answer[i] = ' ';  // 공백은 그대로 복사
            word_index = 0;    // 새로운 단어 시작
        } else {
            // 짝수 인덱스는 대문자, 홀수 인덱스는 소문자로 변환
            if (word_index % 2 == 0) {
                answer[i] = toupper(s[i]); // 대문자 변환
            } else {
                answer[i] = tolower(s[i]); // 소문자 변환
            }
            word_index++; // 단어 내 인덱스 증가
        }
    }

    answer[len] = '\0'; // 문자열 끝에 널 문자 추가
    return answer;
}

int main() {
    const char* s = "try hello world";
    char* result = solution(s);
    printf("%s\n", result);  // 출력: TrY HeLlO WoRlD
    free(result);  // 동적 메모리 해제
    return 0;
}
