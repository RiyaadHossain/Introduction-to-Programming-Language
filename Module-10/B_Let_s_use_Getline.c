#include <stdio.h>
#include <string.h>

int main()
{
    char text[1000000];
    fgets(text, 1000000, stdin);
    int i = 0;
    while (text[i] != '\\')
    {
        printf("%c", text[i]);
        i++;
    }
    return 0;
}