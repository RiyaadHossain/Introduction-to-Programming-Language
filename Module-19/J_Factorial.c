#include <stdio.h>

long long factorialOfN(int n)
{
    if (n == 0)
        return 1;

    return n * factorialOfN(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lld", factorialOfN(n));

    return 0;
}