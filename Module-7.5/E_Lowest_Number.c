#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int lowest = INT_MAX, pos = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            pos = i + 1;
        }
    }

    printf("%d %d", lowest, pos);

    return 0;
}