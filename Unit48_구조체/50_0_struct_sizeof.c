/*******************************************************************************
 1. 구조체의 크기는 구조체 안에 가장 큰 자료형 크기위 배수로 정렬함
    가. PacketHeader의 구조체 크기는 5바이트일것 같지만 실제로는
        실제로는 가장 큰 자료형 크기인 int의 배수로 8byte가 나옴.
    나. Padding(패딩) : 남는 공간을 채우는 것

 2. 구조체 정렬을 피하는 방법
    가. #pragma pack(push, 정렬크기) : 지정된 정렬크기로 정렬
    나. #pragma pack(pop) : 정렬 설정을 이전 상태로 되돌림
********************************************************************************/

#include <stdio.h>
#include <stddef.h> // offsetof 매크로가 정의된 헤더 파일

struct PacketHeader
{
    char flags; // 1바이트
    int seq;    // 4바이트
};

int main()
{
    struct PacketHeader header;

    printf("%d\n", sizeof(header.flags));        // 1: char는 1바이트
    printf("%d\n", sizeof(header.seq));          // 4: int는 4바이트
    printf("%d\n", sizeof(header));              // 8: 구조체 전체 크기는 8바이트
    printf("%d\n", sizeof(struct PacketHeader)); // 8: 구조체 이름으로 크기 구하기

    printf("flag의 offset 값 : %d\n", offsetof(struct PacketHeader, flags)); // 0
    printf(" seq의 offset 값 : %d\n", offsetof(struct PacketHeader, seq));   // 4

    return 0;
}
