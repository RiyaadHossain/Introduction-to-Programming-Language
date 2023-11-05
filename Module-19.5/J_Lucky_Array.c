#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (minimum > arr[i])
            minimum = arr[i];
    }

    int min_freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minimum)
            min_freq++;
    }

    if (min_freq % 2 == 0)
        printf("Unlucky");
    else
        printf("Lucky");

    return 0;
}