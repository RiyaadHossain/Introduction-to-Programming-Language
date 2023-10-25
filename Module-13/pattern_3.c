#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int starN = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= starN; j++)
        {
            printf("* ");
        }

        starN += 2;
        printf("\n");
    }

    starN = n + 2;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= starN; j++)
        {
            printf("* ");
        }

        starN -= 2;
        printf("\n");
    }

    return 0;
}