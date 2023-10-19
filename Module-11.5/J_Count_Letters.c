#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    int freqArr[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        freqArr[c - 'a']++;
    }

    for (int i = 0; i <= 25; i++)
    {
        if (freqArr[i] != 0)
            printf("%c : %d\n", i + 'a', freqArr[i]);
    }

    return 0;
}