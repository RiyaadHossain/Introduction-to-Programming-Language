#include <stdio.h>

int main()
{
    char ch;
    int cons = 0;

    while (scanf("%c", &ch) != EOF)
    {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch >= 'a' && ch <= 'z')
            cons++;
    }

    printf("%d", cons);

    return 0;
}