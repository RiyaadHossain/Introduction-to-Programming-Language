#include <stdio.h>

int my_abs(int n)
{
    int result;
    if (n > 0)
        result = n;
    else
        result = n * (-1);

    return result;
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%d", my_abs(n));

    return 0;
}