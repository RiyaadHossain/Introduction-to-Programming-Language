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

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (freqArr[i-'a'] != 0)
            printf("%c : %d\n", i, freqArr[i-'a']);
    }

    return 0;
}