#include <stdio.h>
/**************************************************
void*는 어떤 포인터 자료형도 사용할수 있는 범용
void* <-----> char*  | short* | int *

단 자료형이 정해져 있지 않으므로 *ptr로 역참조 할수 없음.

**************************************************/
int main()
{
    int num1 = 10;
    char c1 = 'a';
    int *numPtr1 = &num1;
    char *cPtr1 = &c1;

    void *ptr; // void 포인터 선언

    // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
    ptr = numPtr1; // void 포인터에 int 포인터 저장
    ptr = cPtr1;   // void 포인터에 char 포인터 저장

    // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
    numPtr1 = ptr; // int 포인터에 void 포인터 저장
    cPtr1 = ptr;   // char 포인터에 void 포인터 저장

    return 0;
}