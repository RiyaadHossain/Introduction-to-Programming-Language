#include <stdio.h>

void printSth(int n)
{
    if (n == 0)
        return;

    printf("I love Recursion\n");
    printSth(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printSth(n);

    return 0;
}