#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, num;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        scanf("%d", &num);

        int flag = 0;
        while (n--)
        {
            if (arr[n] == num)
            {
                printf("YES\n");
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("NO\n");
    }

    return 0;
}