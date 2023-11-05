#include <stdio.h>

int main()
{
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    int flag = 0, memo = 0;
    if (a % k == 0)
    {
        flag++;
        memo = 1;
    }

    if (b % k == 0)
        flag++;

    if (flag == 2)
        printf("Both");
    else if (flag == 1 && memo == 1)
        printf("Memo");
    else if (flag == 1 && memo == 0)
        printf("Momo");
    else
        printf("No One");

    return 0;
}