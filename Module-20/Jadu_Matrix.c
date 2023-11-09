#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    if (row != col)
    {
        printf("NO");
        return 0;
    }

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    }

    int isJaduMatrix = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j || i + j == row - 1)
            {
                if (arr[i][j] != 1)
                    isJaduMatrix = 0;
            }
            else
            {
                if (arr[i][j] != 0)
                    isJaduMatrix = 0;
            }
        }
    }

    if (isJaduMatrix)
        printf("YES");
    else
        printf("NO");

    return 0;
}