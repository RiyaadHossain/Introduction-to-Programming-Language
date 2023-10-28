#include <stdio.h>

void fun(int num[]) // array is always pass by reference
{
    num[0] = 5;
}

int main()
{
    int num[3] = {1, 2, 3};

    // num == &num[0]
    printf("0th address of num array - %p  \n", num);      // 0x7fff7452ef7c
    printf("1th value of num array - %d  \n", *(num + 1)); // 1

    fun(num);

    for (int i = 0; i < 3; i++)
        printf("%d ", num[i]);

    return 0;
}