#include <stdio.h>

char small_to_capital(char ch)
{
    char result = ch - 32;
    return result;
}

int main()
{
    char ch;
    scanf("%c", &ch);

    char result = small_to_capital(ch);
    printf("%c", result);

    return 0;
}