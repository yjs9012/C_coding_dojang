/************************************************************************************
  1. 구조체별칭* 포인터이름 = malloc(sizeof(구조체별칭))
  2. 멤버변수 접근 : p1->member | (*p1).member
  3. 포인터 할당 방법 
     가. 포인터에 동적 메모리 할당 : 포인터 변수만 선언
     나. 포인터에 구조체 주소 할당 : 구조체 변수와 포인터변수 선언
*************************************************************************************/

#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

typedef struct _Person {    // 구조체 이름은 _Person
    char name[20];             // 구조체 멤버 1
    int age;                   // 구조체 멤버 2
    char address[100];         // 구조체 멤버 3
} Person;                   // typedef를 사용하여 구조체 별칭을 Person으로 정의

int main()
{
    Person *p1 = malloc(sizeof(Person));    // 구조체 별칭으로 포인터 선언, 메모리 할당

    // 화살표 연산자로 구조체 멤버에 접근하여 값 할당
    strcpy(p1->name, "홍길동");
    p1->age = 30;
    strcpy(p1->address, "서울시 용산구 한남동");

    // 화살표 연산자로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1->name);       // 홍길동
    printf("나이: %d\n", p1->age);        // 30
    printf("주소: %s\n", p1->address);    // 서울시 용산구 한남동

    free(p1);    // 동적 메모리 해제

    return 0;
}