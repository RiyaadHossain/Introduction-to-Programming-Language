#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1, space = 5 + (n / 2);

    while (star <= 10 + n)
    {
        for (int i = 0; i < space; i++)
            printf(" ");

        for (int i = 0; i < star; i++)
            printf("*");

        printf("\n");

        star += 2;
        space--;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf(" ");

        for (int j = 0; j < n; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}