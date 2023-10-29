#include <stdio.h>

int count_len(char str[])
{
    int i = 0, len = 0;
    while (str[i] != '\0')
    {
        i++;
        len++;
    }

    return len;
}

int main()
{
    char str[100];
    scanf("%s", str);

    printf("%d", count_len(str));

    return 0;
}