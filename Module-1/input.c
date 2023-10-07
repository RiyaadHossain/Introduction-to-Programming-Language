#include <stdio.h>

int main()
{
    int num;
    float floatingNum;
    char charData;

    scanf("%d", &num);
    scanf("%f %c", &floatingNum, &charData);

    printf("Num is: %d \n", num);
    printf("Float is: %f \n", floatingNum);
    printf("Char is: %c \n", charData);
    return 0;
}