#include <stdio.h>
#include <string.h>

int main()
{
    int n = 100001;
    char str[n];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ',')
            str[i] = ' ';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else
            str[i] = str[i] - 32;
    }

    printf("%s", str);

    return 0;
}