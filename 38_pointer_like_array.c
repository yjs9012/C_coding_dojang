#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일

int main()
{
    /********************************(One Dimensional Array********************************/
    int *numPtr = malloc(sizeof(int) * 10); // int 10개 크기만큼 동적 메모리 할당

    numPtr[0] = 10; // 배열처럼 인덱스로 접근하여 값 할당
    numPtr[9] = 20; // 배열처럼 인덱스로 접근하여 값 할당

    printf("%d\n", numPtr[0]); // 배열처럼 인덱스로 접근하여 값 출력
    printf("%d\n", numPtr[9]); // 배열처럼 인덱스로 접근하여 값 출력
    /********************************(Two Dimensional Array********************************/
    int **numPtr2 = malloc(sizeof(int *) * 3); // int*에 세로크기만큼 동적 메모리 할당
    for (int i = 0; i < 10; i++)
    {
        numPtr2[i] = malloc(sizeof(int) * 4); // int에 가로크기만큼 동적 메모리 할당
    }
    numPtr2[0][0] = 10;
    numPtr2[9][9] = 20;

    printf("%d\n", numPtr2[0][0]);
    printf("%d\n", numPtr2[9][9]);
    printf("%d\n", numPtr2[5][5]); // 지정되지 않은 공간은 0으로 초기화
    /********************************(Three Dimensional Array********************************/
    int ***numPtr3 = malloc(sizeof(int **) * 2);
    for (int i = 0; i < 2; i++)
    {
        numPtr3[i] = malloc(sizeof(int *) * 3);
        for (int j = 0; j < 3; j++)
            numPtr3[i][j] = malloc(sizeof(int) * 5);
    }
    numPtr3[0][0][0] = 10;
    numPtr3[1][2][4] = 20;

    printf("%d\n", numPtr3[0][0][0]);
    printf("%d\n", numPtr3[1][2][4]);
    printf("%d\n", numPtr3[0][1][2]); // 지정되지 않은 공간은 0으로 초기화
    /*************************************(Free*******************************************/
    free(numPtr); // 1차원 배열

    for (int i = 0; i < 10; i++) // 2차원 배열
    {
        free(numPtr2[i]);
    }
    free(numPtr2);

    for (int i = 0; i < 2; i++)
    { // 3차원 배열
        for (int j = 0; j < 3; j++)
            free(numPtr3[i][j]);
        free(numPtr3[i]);
    }
    free(numPtr3);

    return 0;
}