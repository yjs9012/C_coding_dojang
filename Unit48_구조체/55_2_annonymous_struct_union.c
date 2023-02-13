#include <stdio.h>

struct Vector3
{ // 3차원 벡터 좌표
    union
    { // 익명 공용체
        struct
        {            // 익명 구조체
            float x; // x 좌표
            float y; // y 좌표
            float z; // z 좌표
        };
        float v[3]; // 좌표를 배열로 저장
    };
};
// float x,y,z가 차지하는 메모리 크기 = float v[3] 차지하는 메모리 크기
// 어디에 값을 저장하는 같은 값을 가지게 됨

int main()
{
    struct Vector3 pos;
    // (1)
    for (int i = 0; i < 3; i++) // 3번 반복
    {
        pos.v[i] = 1.0f; // v는 배열이므로 인덱스로 접근 할 수 있음
    }
    printf("%f %f %f\n", pos.x, pos.y, pos.z); // 1.000000 1.000000 1.000000: x, y, z로 접근
    // (2)
    pos.x = pos.y = pos.z = 2.0f;
    printf("%f %f %f\n", pos.v[0], pos.v[1], pos.v[2]);

    return 0;
}