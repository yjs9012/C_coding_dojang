#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일
#include <string.h> // memset 함수가 선언된 헤더 파일

/*
memset(포인터, 설정할값, 크기)
void* memset(void* b, int c, size_t len); size_t 1 byte 단위 초기화
char 배열 초기화에 최적화 되어있음!!!!
https://blog.naver.com/oddish0513/222802738143
*/

int main()
{
    long long *numPtr = malloc(sizeof(long long)); // long long의 크기 8바이트만큼 동적 메모리 할당
    memset(numPtr, 0x27, 8);                       // numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정
    printf("0x%llx\n", *numPtr);                   // 0x2727272727272727: 27이 8개 들어가 있음
    free(numPtr);                                  // 동적으로 할당한 메모리 해제

    char arr[] = "Hello world!";
    for (int i = 0; i < sizeof(arr); i++) // 원래 문장 출력
        printf("%c", arr[i]);
    printf("\n");

    memset(arr, 'p', 7 * sizeof(char));
    for (int i = 0; i < sizeof(arr); i++) // memset 사용 후 문장 출력
        printf("%c", arr[i]);
    printf("\n");

    return 0;
}