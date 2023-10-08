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

    if (letter >= 'A' && letter <= 'Z')
        numChar = letter + 32;
    else
        numChar = letter - 32;

    printf("%c\n", numChar);

    // Problem 4
    int num = 4569; // X > 999 & X <= 9999
    int ans = num / 1000;

    if (ans % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");

    // Problem 5
    int numOrAlpha = 'G';

    if (numOrAlpha >= '0' && numOrAlpha <= '9')
    {

        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (numOrAlpha >= 'A' && numOrAlpha <= 'Z')
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }

    // Problem 6
    int num1 = 1, num2 = 2, num3 = 3;

    int max, min;
    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }

    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    else
    {
        min = num3;
    }

    printf("%d %d", min, max);

    return 0;
}