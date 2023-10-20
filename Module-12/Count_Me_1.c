#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num_2 = 0;
    int num_3 = 0;

    int arr[n];
    while (n--)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
            num_2++;
        else if (num % 3 == 0)
        {
            num_3++;
        }
    }

    printf("%d %d", num_2, num_3);

    return 0;
}