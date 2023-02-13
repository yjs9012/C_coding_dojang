/***********************************************************************************
 1. 구조체 정의 순서 : (안에 들어간 구조체) Phone -> Person 순서로 정의  
                     Person -> Phone 순서로 정의하면 에러 메시지 나옴
 2. 구조체 포인터를 멤버로 가지면, 멤버 포인터에도 메모리 할당해 주어야 함.
    (할당 순서) 바깥 구조체 메모리 할당 -> 내부 멤버포인터 메모리 할당
    (해제 순서) 내부 포인터 메모리 해제 -> 바깥 구조체 메모리 해제      
************************************************************************************/

#include <stdio.h>

struct Phone
{                              // 휴대전화 구조체
    int areacode;              // 국가번호
    unsigned long long number; // 휴대전화 번호
};

struct Person
{                       // 사람 구조체
    char name[20];      // 이름
    int age;            // 나이
    struct Phone phone; // 휴대전화. 구조체를 멤버로 가짐
};

int main()
{
    struct Person p1;
    struct Person p2 = {.name = "Andrew", .age = 25, {.areacode =82, .number = 3045671234}}; //p2 초기화

    p1.phone.areacode = 82;       // 변수.멤버.멤버 순으로 접근하여 값 할당
    p1.phone.number = 3045671234; // 변수.멤버.멤버 순으로 접근하여 값 할당

    printf("%d %llu\n", p1.phone.areacode, p1.phone.number); // 82 3045671234

    return 0;
}