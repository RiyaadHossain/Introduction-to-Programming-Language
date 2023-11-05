#include <stdio.h>

int main()
{
    int x, p;
    scanf("%d %d", &x, &p);

    float percentageRate = 1.0 - ((x * 1.0) / 100.0);
    float originalPrice = p / percentageRate;

    printf("%.2f", originalPrice);

    return 0;
}