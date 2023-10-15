#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr1[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    int arr2[m];
    for (int j = 0; j < m; j++)
        scanf("%d", &arr2[j]);

    int i;
    int ans[n + m];
    for (i = 0; i < n + m; i++)
    {
        if (i < n)
            ans[i] = arr1[i];
        else
            ans[i] = arr2[i - n];
    }

    for (int i = 0; i < n + m; i++)
        printf("%d ", ans[i]);

    return 0;
}
