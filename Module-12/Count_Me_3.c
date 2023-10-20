#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char str[10001];
        scanf("%s", str);

        int capitalChar = 0;
        int smallerChar = 0;
        int digitChar = 0;

        int strLen = strlen(str);
        for (int i = 0; i < strLen; i++)
        {
            if (str[i] >= 'A' && 'Z' >= str[i])
                capitalChar++;

            if (str[i] >= 'a' && 'z' >= str[i])
                smallerChar++;

            if (str[i] >= '0' && '9' >= str[i])
                digitChar++;
        }

        printf("%d %d %d\n", capitalChar, smallerChar, digitChar);
    }

    return 0;
}