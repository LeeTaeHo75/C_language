#include <stdio.h>
#include <ctype.h>

// 함수 원형 선언
// 함수 원형 선언
int count_word(char* s);

// 메인 함수
int main(void)
{
    // count_word 함수를 호출하고 반환된 결과를 wc에 저장
    int wc = count_word("the c book...");
    // 결과 출력
    printf("단어의 개수: %d\n", wc);
    return 0;
}

// count_word 함수 정의
int count_word(char* s)
{
    // 변수 선언 및 초기화
    int i, wc = 0, waiting = 1;

    // 문자열을 반복하면서 단어의 개수를 세는 로직
    for (i = 0; s[i] != NULL; i++) {
        // 현재 문자가 알파벳인지 확인
        if (isalpha(s[i])) {
            // 알파벳이면서 이전에 단어를 기다리고 있었으면
            if (waiting) {
                // 단어 개수를 증가시키고 기다림 플래그를 해제
                wc++;
                waiting = 0;
            }
        }
        else {
            // 현재 문자가 알파벳이 아니면 기다림 플래그를 설정
            waiting = 1;
        }
    }

    // 최종적으로 센 단어의 개수를 반환
    return wc;
}
