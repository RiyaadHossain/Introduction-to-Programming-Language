#include <stdio.h>

int row, col;

void printNum(int n)
{
    if (n <= 0)
        return;

    printNum(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        printNum(n);

        if (n == 0)
            printf("0");

        printf("\n");
    }

    return 0;
}