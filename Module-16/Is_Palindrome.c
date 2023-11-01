#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int isPilandrome = 1, n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            isPilandrome = 0;
            break;
        }
    }

    return isPilandrome;
}

int main()
{
    char str[1001];
    scanf("%s", str);

    int result = is_palindrome(str);

    if (result)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}