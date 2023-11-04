#include <stdio.h>
#include <string.h>

int isPilandrome(char str[1000], int idx, int lastIdx)
{
    if (idx > lastIdx / 2)
        return 1;

    if (str[idx] == str[lastIdx - idx])
    {
        return isPilandrome(str, idx + 1, lastIdx);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[1000];
    scanf("%s", str);

    int len = strlen(str);
    
    if (isPilandrome(str, 0, len - 1))
        printf("YES");
    else
        printf("NO");

    return 0;
}