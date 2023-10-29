#include <stdio.h>

void fun(int arr[]) // array is always pass by reference
{
    arr[0] = 5;
}

int main()
{
    int arr[3] = {1, 2, 3};

    printf("0th address of arr array - %p  \n", arr);      // 0x7fff7452ef7c || arr -> &arr[0]
    printf("1th value of arr array - %d  \n", *(arr + 1)); // 1 || *(arr+1) -> arr[1]

    fun(arr);

    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);

    return 0;
}