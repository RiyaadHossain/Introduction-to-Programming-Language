#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int farmer_gourp_1;
        int farmer_gourp_2;
        int day;

        scanf("%d %d %d", &farmer_gourp_1, &farmer_gourp_2, &day);

        int day_each_farmer = day * farmer_gourp_1;
        int day_total_farmer = day_each_farmer / (farmer_gourp_1 + farmer_gourp_2);
        int day_less = day - day_total_farmer;

        printf("%d\n", day_less);
    }

    return 0;
}
