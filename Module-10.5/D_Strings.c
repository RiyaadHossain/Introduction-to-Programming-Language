#include <stdio.h>
#include <string.h>

int main()
{
    int n = 11;

    char str1[n], str2[n];
    scanf("%s %s", str1, str2);

    int strLen1 = strlen(str1);
    int strLen2 = strlen(str2);

    char newStr[strLen1 + strLen2];
    int i = 0;
    while (str1[i] != '\0')
    {
        newStr[i] = str1[i];
        i++;
    }

    newStr[i++] = ' ';

    int j = 0;
    while (str2[j] != '\0')
    {
        newStr[i] = str2[j];
        i++;
        j++;
    }

    newStr[0] = str2[0];
    newStr[strLen1+1] = str1[0];
    newStr[i] = '\0';

    printf("%d %d\n", strLen1, strLen2);
    printf("%s%s\n", str1, str2);
    printf("%s", newStr);

    return 0;
}
