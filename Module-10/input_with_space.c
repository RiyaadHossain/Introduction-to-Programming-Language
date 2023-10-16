#include <stdio.h>
#include <string.h>

int main()
{
    char str[18];
    gets(str); // -> Don't take enter
    // fgets(str, 17, stdin); // -> take enter
    printf("%s", str);
    return 0;
}