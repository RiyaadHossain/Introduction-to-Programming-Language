#include <stdio.h>
#include <string.h>

int main()
{
    int n = 21;
    char str1[n], str2[n];
    scanf("%s %s", str1, str2);

    int result = strcmp(str1, str2);

    if (result < 0)
        printf("%s", str1);
    else
        printf("%s", str2);

    return 0;
}