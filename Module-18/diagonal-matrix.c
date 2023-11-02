#include <stdio.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    }

    int is_primaryDiagonal = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i != j && arr[i][j] != 0)
                is_primaryDiagonal = 0;
        }
    }

    if (is_primaryDiagonal)
        printf("Matrix is Primary Diagonal\n");
    else
        printf("Matrix is not Primary Diagonal\n");

    int is_secDiagonal = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j != row - 1 && arr[i][j] != 0)
                is_secDiagonal = 0;
        }
    }

    if (is_secDiagonal)
        printf("Matrix is Secondary Diagonal\n");
    else
        printf("Matrix is not Secondary Diagonal\n");

    return 0;
}