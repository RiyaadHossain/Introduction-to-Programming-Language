#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    // Arethmetic Operators: + , - , * , / , %
    int sum = a + b;
    float c = a * 1.0 / b;
    // printf("%0.2f", c);

    // Relational Operators: <, <=, >, >=, ==, !=
    int value1 = a > b;

    // Logical Operators: &&, ||
    int value2 = (a < b) || (b * 3 >= a);

    // Conditional Statement: if-else
    if (a > b)
    {
        printf("a is greater than b\n");
        if (b * 2 >= a)
        {
            printf("b multiple by 2 is greater than or equal to a\n");
        }
        else
            printf("b multiple by 2 is also less than a\n");
        {
        }
    }
    else if (a < b)
    {
        printf("a is less than b\n");
    }
    else
    {
        printf("a is equal to b\n");
    }

    if (a * 2 > b)
    {
        printf("a multiple by 2 is greater than b");
    }
}