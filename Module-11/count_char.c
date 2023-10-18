#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int strLen = strlen(str);
    int freq_char[25] = {0};
    for (int i = 0; i < strLen; i++)
        freq_char[str[i] - 'a']++;

    for (int i = 0; i < strLen; i++)
    {
        int charVal = str[i] - 'a';
        if (freq_char[charVal] != 0)
            printf("%c - %d\n", str[i], freq_char[charVal]);

        freq_char[charVal] = 0;
    }

    return 0;
}