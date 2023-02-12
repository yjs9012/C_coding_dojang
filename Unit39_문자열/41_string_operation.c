#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strlen 함수가 선언된 헤더 파일

/***********************************************************************************
 0. 문자열 연산 총 정리 : https://edu.dojang.io/mod/page/view.php?id=1986
 1. 문자열 길이 : size_t strlen(문자열포인터 | 문자배열)
 2. 문자열 비교 :   int  strcmp(문자열1, 문자열2)
 3. 문자열 복사 :  char* strcpy(대상문자열, 원본문자열)
                  문자열 포인터에 복사할때는 메모리를 할당해주고 복사해주어야함
 4. 문자열 연결 :  char* strcat(대상문자열, 붙일문자열)
                  문자열 포인터는 읽기전용 메모리여서 strcat 사용 불가
                  ex) *s1 = "abc" *s2 = "def" / strcat(s1,s2) 불가
                  메모리를 할당해준뒤에 사용하면 strcat 사용가능
                      --- malloc을 해주면 힙영역이고 안해주면 데이터 영역에 저장되는건가?
 5. 서식지정해서 문자열 생성 : char* sprintf(배열, 서식, 값1, 값2 ...)
 6. 문자열에서 특정문자 검색 : char* strchr(대상문자열, 검색할문자)
    문자열오른쪽에서 문자검색: char* strrchr(대상문자열, 검색할문자)
    문자열에서 문자열로 검색 : char* strstr(대상문자열, 검색할 문자열)
************************************************************************************/

int main()
{
    char *s1 = "Hello";    // 포인터에 문자열 Hello의 주소 저장
    char s2[10] = "Hello"; // 크기가 10인 char형 배열을 선언하고 문자열 할당
    char s3[10];
    char *s4 = malloc(sizeof(char) * 10);
    char s5[30];
    char s6[30] = "A Garden Diary";

    // 1. strlen
    printf("%ld\n", strlen(s1)); // 5: strlen 함수로 문자열의 길이를 구함
    printf("%ld\n", strlen(s2)); // 5: strlen 함수로 문자열의 길이를 구함

    // 2. strcmp
    int ret = strcmp(s1, s2); // 두 문자열이 같은지 문자열 비교
    printf("%d\n", ret);      // 0: 두 문자열이 같으면 0

    // 3. strcpy
    strcpy(s3, s1);
    printf("%s\n", s3);

    // 4. strcat
    strcat(s2, s1);
    printf("%s\n", s2);

    // 5. sprintf
    sprintf(s5, "%c %d %f %e", 'a', 10, 3.2f, 1.234e-10f);
    printf("%s\n", s5);

    // 6. strchr
    char *ptr1 = strchr(s6, 'a'); // 'a'로 시작하는 문자열 검색, 포인터 반환

    while (ptr1 != NULL) // 검색된 문자열이 없을 때까지 반복
    {
        printf("%s\n", ptr1);         // 검색된 문자열 출력
        ptr1 = strchr(ptr1 + 1, 'a'); // 포인터에 1을 더하여 a 다음부터 검색
    }

    // 7. strrchr
    char *ptr2 = strrchr(s6, 'a');
    printf("%s\n", ptr2);

    // 8. strstr
    char *ptr3 = strstr(s6, "den"); //"den"으로 시작하는 문자열 반환
    printf("%s\n", ptr3);
    return 0;
}