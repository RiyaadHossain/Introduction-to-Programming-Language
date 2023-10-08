#include <stdio.h>

int main()
{
    // Problem 1
    int a = 9, b = 3;
    if (a >= b)
        printf("Yes\n");
    else
        printf("No\n");

    // Problem 2
    if (a % b == 0 || b % a == 0)
        printf("Multiplies\n");
    else
        printf("No Multiplies\n");

    // Problem 3
    char letter = 'F';

    int numChar;

    if (letter >= 65 && letter <= 90)
        numChar = letter + 32;
    else
        numChar = letter - 32;

    printf("%c\n", numChar);

    // Problem 4
    int num = 3569;
    while (num >= 9)
    {
        num /= 10;
    }

    if (num % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");

    // Problem 5
    int numOrAlpha = 'G';

    if (numOrAlpha >= 65 && numChar <= 123)
    {
        printf("ALPHA\n");
        if (
            numOrAlpha >= 65 &&
            numOrAlpha <= 90)
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }
    else if (
        numOrAlpha >= 48 &&
        numOrAlpha <= 57)
    {

        printf("IS DIGIT\n");
    }

    // Problem 6
    int num1 = 1, num2 = 2, num3 = 3;

    int max, min;
    if (num1 > num2)
    {
    }
    else
    {
    }

    return 0;
}