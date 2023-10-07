#include <stdio.h>

int main()
{
    int num = 10;
    float floatingNum = 10.553;
    char charValue = 'A'; // 'c' or '*' or '3'

    printf("Int: %d \n", num);
    printf("Float: %f \n", floatingNum);    // '%f'
    printf("Float: %0.2f \n", floatingNum); // '%0.2f'
    printf("Char: %c", charValue);

    return 0;
}