#include <stdio.h>

int main()
{
    int freqArr[26] = {0};

    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        freqArr[ch - 'a']++;
    }

    for (int i = 0; i <= 25; i++)
    {
        if (freqArr[i] > 0)
            printf("%c - %d\n", 'a' + i, freqArr[i]);
    }

    return 0;
}