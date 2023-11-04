#include <stdio.h>

int row, col;

void printMatrix(int matrix1[row][col], int matrix2[row][col], int row, int col)
{
    if (row < 0)
        return;
        
    printMatrix(matrix1, matrix2, row - 1, col);

    for (int i = 0; i <= col; i++)
        printf("%d ", matrix1[row][i] + matrix2[row][i]);
    printf("\n");
}

int main()
{
    scanf("%d %d", &row, &col);

    int matrix1[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix1[i][j]);
    }

    int matrix2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix2[i][j]);
    }

    printMatrix(matrix1, matrix2, row - 1, col - 1);

    return 0;
}