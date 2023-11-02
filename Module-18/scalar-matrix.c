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

    int is_scalar = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != arr[0][0])
                    is_scalar = 0;
            }
            else if (arr[i][j] != 0)
                is_scalar = 0;
        }
    }

    if (is_scalar)
        printf("Matrix is Scalar\n");
    else
        printf("Matrix is not Scalar\n");

    return 0;
}