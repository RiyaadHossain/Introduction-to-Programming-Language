#include <stdio.h>
#include <string.h>

int main()
{
    int n = 100;
    char str1[n], str2[n];
    scanf("%s %s", str1, str2);

    // Logical Implementation:
    int strLen1 = strlen(str1);
    int strLen2 = strlen(str2);
    for (int i = 0; i <= strLen2; i++)
    {
        str1[strLen1 + i] = str2[i];
    }

    // Built-in Function:
    strcat(str1, str2);

    printf("%s %s", str1, str2);

    return 0;
}