#include <stdio.h>
#include <string.h>

int main()
{
    char str[100001];
    scanf("%s", str);

    int strLen = strlen(str);

    int pilandrome = 1;
    for (int i = 0; i < strLen / 2; i++)
    {
        if (str[i] != str[strLen - i - 1])
            pilandrome = 0;
    }

    if (pilandrome == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}