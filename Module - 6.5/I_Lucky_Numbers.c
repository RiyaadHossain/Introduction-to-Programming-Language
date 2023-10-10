#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int n1 = num % 10;
    int n2 = num / 10;

    if (n1 % n2 == 0 || n2 % n1 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}