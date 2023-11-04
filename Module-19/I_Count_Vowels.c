#include <stdio.h>
#include <string.h>

int isVowel(char ch)
{
    if (
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

int countVowel(char str[200], int i)
{
    if (str[i] == '\0')
        return 0;

    return isVowel(str[i]) + countVowel(str, i - 1);
}

int main()
{
    char str[200];
    fgets(str, 200, stdin);

    int len = strlen(str);

    printf("%d", countVowel(str, len - 1));

    return 0;
}