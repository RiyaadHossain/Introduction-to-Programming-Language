#include <stdio.h>

int main()
{
    char alphabet;
    scanf("%c", &alphabet);

    if (alphabet == 'z')
        printf("%c", 'a');
    else
        printf("%c", alphabet + 1);

    return 0;
}