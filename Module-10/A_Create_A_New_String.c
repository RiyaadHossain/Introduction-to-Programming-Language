#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1000];
    char str2[1000];

    scanf("%s", str1);
    scanf("%s", str2);

    int strLen1 = strlen(str1);
    int strLen2 = strlen(str2);

    printf("%d %d\n", strLen1, strLen2);
    printf("%s %s", str1, str2);

    return 0;
}