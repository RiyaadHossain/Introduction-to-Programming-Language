#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++)
    {
        int targetIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[targetIdx] > arr[j])
                targetIdx = j;
        }
        int temp = arr[i];
        arr[i] = arr[targetIdx];
        arr[targetIdx] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}