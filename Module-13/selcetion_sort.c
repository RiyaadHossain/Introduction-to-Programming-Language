#include <stdio.h>

int main()
{
    int size = 5;
    int arr[5] = {2, 4, 5, 3, 1};

    for (int i = 0; i < size - 1; i++)
    {
        int targetIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[targetIdx] > arr[j])
                targetIdx = j;
        }

        int temp = arr[i];
        arr[i] = arr[targetIdx];
        arr[targetIdx] = temp;
    }

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}