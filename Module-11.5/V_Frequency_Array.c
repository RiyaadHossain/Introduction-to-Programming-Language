
#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[N];
    int freqArr[100001] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        freqArr[arr[i]]++;
    }

    for (int i = 1; i <= M; i++)
        printf("%d\n", freqArr[i]);

    return 0;
}
