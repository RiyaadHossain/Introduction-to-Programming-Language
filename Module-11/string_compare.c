#include <stdio.h>
#include <string.h>

int main()
{
    int n = 100;
    char str1[n], str2[n];
    scanf("%s %s", str1, str2);

    // Logical Implementation:
    int i = 0;
    while (1)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            printf('A and B is same\n');
            break;
        }
        else if (str1[i] == '\0')
        {
            printf("A is smaller\n");
            break;
        }
        else if (str2[i] == '\0')
        {
            printf("B is smaller\n");
            break;
        }

        if (str1[i] < str2[i])
        {
            printf("A is smaller\n");
            break;
        }
        else if (str1[i] > str2[i])
        {
            printf("B is smaller\n");
            break;
        }

        i++;
    }

    // Built-in Function:
    int result = strcmp(str1, str2); // -1, 0, 1
    if (result < 0)
        printf("A is smaller\n");
    else if (result > 0)
        printf("B is smaller\n");
    else
        printf('A and B is same\n');

    return 0;
}