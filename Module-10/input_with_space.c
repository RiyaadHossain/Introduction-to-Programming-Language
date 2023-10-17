#include <stdio.h>
#include <string.h>

int main()
{
    char str[18];
    gets(str); // -> Take space but Don't take enter
    // fgets(str, 17, stdin); // -> take space and take enter as well
    printf("%s", str);
    return 0;
}