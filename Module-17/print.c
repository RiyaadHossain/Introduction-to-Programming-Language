#include <stdio.h>

void printNum(int n)
{
    if (n == 0)
        return;

    printNum(n - 1);
    printf("%d ", n);
}

int main()
{
    int n = 5;

    printNum(n);
    return 0;
}