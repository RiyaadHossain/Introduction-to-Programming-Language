#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n + 1];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos, num;
    scanf(" %d %d", &pos, &num);

    for (int i = n; i >= pos; i--)
    {
        if (i == pos)
        {
            arr[i] = num;
            break;
        }
        arr[i] = arr[i - 1];
    }

    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}