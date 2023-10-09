#include <stdio.h>

int main()
{
    int n, num;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        do
        {
            int lastDigit = num % 10;
            printf("%d ", lastDigit);
            num /= 10;
        } while (num);
        printf("\n");
    }
    return 0;
}