#include <stdio.h>
#include <stdlib.h>

int n;

int diff_diagnol(int arr[][n])
{
    int primary_diagnol = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                primary_diagnol += arr[i][j];
        }
    }

    int secondary_diagnol = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
                secondary_diagnol += arr[i][j];
        }
    }

    return abs(primary_diagnol - secondary_diagnol);
}

int main()
{
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }

    int diff_two_diagnol = diff_diagnol(arr);
    printf("%d", diff_two_diagnol);

    return 0;
}