#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    }

    int num;
    scanf("%d", &num);

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == num)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("will take number");
    else
        printf("will not take number");

    return 0;
}