#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h> // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일

struct Person
{
    char name[20];
    int age;
    char address[100];
};

struct Person getPerson() // Person 구조체를 반환하는 getPerson 함수 정의
{
    struct Person p;

    strcpy(p.name, "홍길동");
    p.age = 30;
    strcpy(p.address, "서울시 용산구 한남동");

    return p; // 구조체 변수 반환
}

struct Person *allocPerson() // Person 구조체 포인터를 반환하는 allocPerson 함수 정의
{
    struct Person *p = malloc(sizeof(struct Person)); // 구조체 포인터에 동적 메모리 할당;

    strcpy(p->name, "홍길동");
    p->age = 30;
    strcpy(p->address, "서울시 용산구 한남동");

    return p; // 구조체 포인터 반환
}

int main()
{
    struct Person p1;
    struct Person *p2;

    p1 = getPerson(); // 반환된 구조체 변수의 내용이 p1로 모두 복사됨
    p2 = allocPerson();

    // getPerson에서 저장한 값이 출력됨
    printf("이름: %s\n", p1.name);    // 홍길동
    printf("나이: %d\n", p1.age);     // 30
    printf("주소: %s\n", p1.address); // 서울시 용산구 한남동

    // allocPerson에서 저장한 값들이 출력됨
    printf("이름: %s\n", p2->name);    // 홍길동
    printf("나이: %d\n", p2->age);     // 30
    printf("주소: %s\n", p2->address); // 서울시 용산구 한남동

    free(p2); // 동적 메모리 해제

    return 0;
}