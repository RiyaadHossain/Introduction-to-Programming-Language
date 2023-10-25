#include <stdio.h>

int main()
{
    int x = 3;
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int sumExist = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == x)
                sumExist = 1;
        }
    }

    printf("Sum exist: %d", sumExist);

    return 0;
}