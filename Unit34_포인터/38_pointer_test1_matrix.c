#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size, col, row;

    scanf("%d", &size);

    int **arr = malloc(sizeof(int *) * size);
    for (col = 0; col < size; col++)
    {
        arr[col] = malloc(sizeof(int) * size);
        memset(arr[col], 0, sizeof(int) * size);
    }

    for (int i = 0; i < size; i++)
        arr[i][i] = 1;

    for (col = 0; col < size; col++)
    {
        for (row = 0; row < size; row++)
        {
            printf("%d ", arr[col][row]);
        }
        printf("\n");
    }

    for (col = 0; col < size; col++)
        free(arr[col]);
    free(arr);

    return 0;
}