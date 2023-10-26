#include <stdio.h>

int main()
{
    int num = 12;
    int *ptr = &num;

    *ptr = 15; // Dereferrence
    printf("Number: %d", num);
    return 0;
}