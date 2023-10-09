#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num;
    int even = 0, odd = 0, positive = 0, negative = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
            even++;
        else
            odd++;

        if (num < 0)
            negative++;
        else if(num > 0)
            positive++;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}