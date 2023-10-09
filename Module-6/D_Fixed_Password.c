#include <stdio.h>

int main()
{
    int correctPass = 1999;
    int givenPass;

    // EOF -> End of File: When programme needs to take all the values but it don't know when to stop.
    while (scanf("%d", &givenPass) != EOF)
    {
        if (correctPass != givenPass)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct\n");
            break;
        }
    }
    return 0;
}