#include <stdio.h>

char capital_to_small(char ch)
{
    char result = ch + 32;
    return result;
}

int main()
{
    char ch;
    scanf("%c", &ch);

    char result = capital_to_small(ch);
    printf("%c", result);

    return 0;
}