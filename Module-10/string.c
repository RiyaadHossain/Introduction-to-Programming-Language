#include <stdio.h>

int main()
{
    char str[5] = "Riyad"; // {'R', 'i', 'y', 'a', 'd'} | Add extra 1 size to take the null character. 5 + 1(\0) = 6

    int strSize = sizeof(str) / sizeof(char); // Size of arr
    printf("String Size: %d\n", strSize);

    scanf("%s", str);  // Or loop can be used to scan
    printf("%s", str); // Or loop can be used to print
    return 0;
}