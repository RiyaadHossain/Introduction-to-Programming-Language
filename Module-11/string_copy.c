#include <stdio.h>
#include <string.h>

int main()
{
    int n = 100;
    char str1[n], str2[n];
    scanf("%s %s", str1, str2);

    // Logical Implementation:
    for (int i = 0; i <= strlen(str2); i++) // To copy the '\0' value, run the loop till the <= length
    {
        str1[i] = str2[i];
    }

    // Built-in Function:
    strcpy(str1, str2);

    printf("%s %s", str1, str2);

    return 0;
}