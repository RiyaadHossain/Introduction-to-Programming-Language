#include <stdio.h>

int getLen(char str[], int i)
{
    if (str[i] == '\0')
        return 0;

    return 1 + getLen(str, i + 1);
}

int main()
{
    char str[15];
    scanf("%s", str);

    printf("String Len: %d", getLen(str, 0));

    return 0;
}