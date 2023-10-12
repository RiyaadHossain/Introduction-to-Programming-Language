#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num;
    scanf("%d", &num);

    int exist = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            exist = i;
            break;
        }
    }

    printf("%d", exist);

    return 0;
}