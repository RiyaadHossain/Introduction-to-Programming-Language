#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    scanf("%f", &num);

    float ceilVal = ceil(num);
    printf("Ceil:%f\n", ceilVal);

    float floorVal = floor(num);
    float roundVal = round(num);
    float sqrtVal = sqrt(num);
    float powVal = pow(num, 2);

    return 0;
}