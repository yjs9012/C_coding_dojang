/***********************************************************************************
 1. 구조체 멤버 초기화
    가. 변수 선언할때 struct 구조체이름 변수이름 = {0, }; 할당 가능
        -> malloc으로 할당한 메모리에는 사용 불가능
    나. memset(구조체포인터, 설정할값, sizeof(struct 구조체))
        구조체나 메모리를 0으로 초기화할때 주로 사용
************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Point2D
{
    int x;
    int y;
};

int main()
{
    struct Point2D p1 = {
        0,
    }; // malloc으로 할당된 변수에는 사용할수가 없음
    struct Point2D p2;
    struct Point2D *p3 = malloc(sizeof(struct Point2D));

    memset(&p2, 0, sizeof(struct Point2D));
    memset(p3, 0, sizeof(struct Point2D));

    printf("%d %d\n", p1.x, p1.y);
    printf("%d %d\n", p2.x, p2.y);
    printf("%d %d\n", p3->x, p3->y);
    return 0;
}