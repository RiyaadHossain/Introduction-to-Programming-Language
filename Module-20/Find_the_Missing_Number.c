#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long multi_of_3 = a * b * c;
        long long result = m / multi_of_3;

        if (m % multi_of_3 == 0)
            printf("%lld\n", result);
        else
            printf("%d\n", -1);
    }

    return 0;
}
