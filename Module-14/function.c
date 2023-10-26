#include <stdio.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int result = sum(num1, num2);
    printf("Result: %d", result);

    return 0;
}