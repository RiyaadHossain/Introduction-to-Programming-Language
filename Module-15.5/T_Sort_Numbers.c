#include <stdio.h>

void sortNum(int arr[], int copiedArr[])
{
    // Sorting
    for (int i = 0; i < 2; i++)
    {
        int targetIdx = i;
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[targetIdx] > arr[j])
                targetIdx = j;
                }

        int temp = arr[i];
        arr[i] = arr[targetIdx];
        arr[targetIdx] = temp;
    }

    // Printing
    for (int i = 0; i < 3; i++)
        printf("%d\n", arr[i]);

    printf("\n");

    for (int i = 0; i < 3; i++)
        printf("%d\n", copiedArr[i]);
}

int main()
{
    int arr[3], copiedArr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        copiedArr[i] = arr[i];
    }

    sortNum(arr, copiedArr);

    return 0;
}