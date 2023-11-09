#include <stdio.h>

void sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int targetIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[targetIdx])
                targetIdx = j;
        }

        int temp = arr[i];
        arr[i] = arr[targetIdx];
        arr[targetIdx] = temp;
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
            arr2[i] = arr1[i];
        }

        sort(arr2, n);

        for (int i = 0; i < n; i++)
        {
            int value = arr1[i] - arr2[i];
            if (value < 0)
                value *= -1;

            printf("%d ", value);
        }

        printf("\n");
    }

    return 0;
}