#include <stdio.h>

int reverse_digit(int n, int sum)
{
    if (n == 0)
        return sum;

    sum = (sum * 10) + (n % 10);
    return reverse_digit(n / 10, sum);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", reverse_digit(n, 0));

    return 0;
}