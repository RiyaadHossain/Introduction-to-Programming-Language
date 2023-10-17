#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], min = INT_MAX, max = INT_MIN, minIndex = -1, maxIndex = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    arr[minIndex] = max;
    arr[maxIndex] = min;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}