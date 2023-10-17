#include <stdio.h>
#include <string.h>

int main()
{
    int strLen = 101;

    int n;
    scanf("%d", &n);

    char str[strLen];
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", str);

        int stringLen = strlen(str);
        if (stringLen <= 10)
            printf("%s\n", str);
        else
        {
            char firstChar = str[0];
            char lastChar = str[stringLen - 1];
            printf("%c%d%c\n", firstChar, stringLen - 2, lastChar);
        }
    }

    return 0;
}