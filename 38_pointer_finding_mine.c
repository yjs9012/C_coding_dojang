#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int m, n;
    int mine_counter = 0; // 주변 지뢰 카운터
    int i, j;

    scanf("%d %d", &m, &n); // 행렬의 크기 입력

    char **minesweeper = malloc(sizeof(char *) * m); // 행렬의 세로(가로줄) 할당

    for (i = 0; i < m; i++)
    {                                                      // 세로 크기만큼 반복
        minesweeper[i] = malloc(sizeof(char) * (n + 1));   // 가로 크기만큼 반복
        memset(minesweeper[i], 0, sizeof(char) * (n + 1)); // 각 요소를 0으로 초기화
    }

    for (i = 0; i < m; i++)
    { // 문자열 입력
        scanf("%s", minesweeper[i]);
    }

    for (i = 0; i < m; i++)
    { // 배열의 요소를 검색 후 '*' 와 같으면 넘어감
        for (j = 0; j < n; j++)
        {
            if (minesweeper[i][j] == '*')
            {
                printf("%c", minesweeper[i][j]);
                continue;
            }

            else
            { // '*'와 같지 않으면 현재 위치 주변 8개
                for (int y = i - 1; y <= i + 1; y++)
                { // (왼쪽 위 대각선, 위, 오른쪽 위 대각선,
                    for (int x = j - 1; x <= j + 1; x++)
                    { //  왼쪽, 오른쪽
                        if (y < 0 || x < 0 || y >= m || x >= n)
                            continue; //  왼쪽 아래 대각선, 아래, 오른쪽 아래 대각선)
                        else if (minesweeper[y][x] == '*')
                            mine_counter += 1; // 범위를 벗어나면 넘어가고, 검색했을때 '*'와 같다면 mine_counter에 1씩 추가
                    }
                }
                minesweeper[i][j] = mine_counter; // 해당 위치에 지뢰 갯수 표시 후 mine_counter는 0으로 초기화
                printf("%d", minesweeper[i][j]);
                mine_counter = 0;
            }
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    { // 할당한 메모리 해제
        free(minesweeper[i]);
    }

    free(minesweeper);

    return 0;
}
