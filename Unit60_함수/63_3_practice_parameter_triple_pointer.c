#include <stdio.h>
#include <stdlib.h>

void allocMatrix(void ***ptr, int row, int column, int size)
{
    *ptr = malloc(sizeof(void *) * row);
    for (int i = 0; i < row; i++)
    {
        (*ptr)[i] = malloc(size * column);
    }
}

void freeMatrix(void ***ptr, int m)
{
    for (int i = 0; i < m; i++)
    {
        free((*ptr)[i]);
    }
    free(*ptr);
}

int main()
{
    short **matrix;

    // m: 3, n: 3, 요소의 자료형 short
    allocMatrix(&matrix, 3, 3, sizeof(short));

    matrix[0][2] = 10;
    matrix[1][1] = 20;
    printf("%d %d\n", matrix[0][2], matrix[1][1]);

    freeMatrix(&matrix, 3);

    return 0;
}