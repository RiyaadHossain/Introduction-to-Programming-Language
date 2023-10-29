#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j >= 0; j--)
            printf("  ");

        int star = (2 * (i + 1) - 1);
        for (int j = 0; j < star; j++)
        {
            if (i == n - 1 || j == 0 || j == star - 1)
                printf("* ");

            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
