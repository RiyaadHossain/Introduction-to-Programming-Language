#include <stdio.h>

void fun(int *ptr)
{
    *ptr = 50;
    printf("Fun - %d\n", *ptr);
}

int main()
{
    int num = 10;
    fun(&num);
    printf("Main - %d", num);
    return 0;
}