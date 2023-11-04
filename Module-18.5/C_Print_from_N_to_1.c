#include <stdio.h>

void print1_n(int n)
{
    if (n == 0)
        return;

    if (n > 1)
        printf("%d ", n);
    else
        printf("%d", n);

    print1_n(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print1_n(n);

    return 0;
}