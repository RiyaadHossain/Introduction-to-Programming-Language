#include <stdio.h>
#include <limits.h>

int findMax(int arr[], int n)
{
    if (n == 0)
        return arr[0];

    int max = findMax(arr, n - 1);
    if (arr[n] > max)
        return arr[n];
    else
        return max;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", findMax(arr, n - 1));

    return 0;
}
