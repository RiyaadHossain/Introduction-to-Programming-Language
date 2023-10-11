#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // Array Initialization
    int arr2[2] = {1, 2};
    int arr3[5] = {0}; // {0, 0, 0, 0, 0}

    // int arr4[n] = {0} -> Error: Variable size array is not assignable

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum is: %d\n", sum);

    return 0;
}