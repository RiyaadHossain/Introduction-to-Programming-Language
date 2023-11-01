#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1, star = 1;
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int j = 0; j < space; j++)
            printf(" ");

        for (int j = 0; j < star; j++)
        {
            if (i % 2 == 1)
                printf("#");
            else
                printf("-");
        }

        if (i < n)
        {
            space--;
            star += 2;
        }
        else
        {
            space++;
            star -= 2;
        }

        printf("\n");
    }

    return 0;
}