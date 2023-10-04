#include <stdio.h>

int main()
{

    /*
        Lesson Context:
            - For Loop
            - Print iterator value
            - Calculate sum in loop
            - condition in loop
            - continue statement
            - break statement
    */

    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;

        sum += i;
        printf("Count: %d\n", i);

        if (i == 8)
            break;
    }

    printf("Sum is: %d\n", sum);

    /****************************************************************/

    /*
        More Learning Context:
            - While loop
            - Do While loop
    */

    int iterator = 0;
    while (iterator <= 10)
    {
        printf("Hello %d\n", iterator);
        iterator += 2;
    }

    iterator = 1;
    do
    {
        printf("Hello %d\n", iterator);
        iterator += 2;
    } while (iterator <= 5);

    return 0;
}