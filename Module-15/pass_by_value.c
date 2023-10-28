#include <stdio.h>

void fun(int num)
{
    num = 50;
    printf("Fun - %d\n", num);
}

int main()
{
    int num = 10;
    fun(num);
    printf("Main - %d", num);
    return 0;
}