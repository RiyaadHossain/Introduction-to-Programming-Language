#include <stdio.h>
#include <string.h>

int main()
{
    int n = 1000001;
    char numString[n];
    scanf("%s", &numString);

    int sum = 0;
    for (int i = 0; i < strlen(numString); i++)
    {
        sum += (numString[i] - '0');
    }
    printf("%d", sum);

    return 0;
}