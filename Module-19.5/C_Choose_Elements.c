#include <stdio.h>

void sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, n);

    long long maxSum = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] > 0)
            maxSum += arr[i];
    }

    printf("%lld", maxSum);

    return 0;
}