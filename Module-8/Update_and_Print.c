#include <stdio.h>

int main()
{
    int n, index, num;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &index, &num);

    arr[index] = num;

    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}