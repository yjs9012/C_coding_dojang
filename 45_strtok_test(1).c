// 문자열 자르고 문자열 보관하기

#define _CRT_SECURE_NO_WARNINGS // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h> // strtok 함수가 선언된 헤더 파일

int main()
{
    int i;
    char s1[30] = "2015-06-10T15:32:19"; // 크기가 30인 char형 배열을 선언하고 문자열 할당
    char *sArr[10] = {
        NULL,
    };

    char *ptr = strtok(s1, "-T:"); // -, T, 콜론을 기준으로 문자열을 자름
                                   // 포인터 반환

    while (ptr != NULL) // 자른 문자열이 나오지 않을 때까지 반복
    {
        sArr[i] = ptr;             // 자른 문자열 출력
        ptr = strtok(NULL, "-T:"); // 다음 문자열을 잘라서 포인터를 반환
        i++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (sArr[i] != NULL)
            printf("%s\n", sArr[i]);
    }

    return 0;
}
