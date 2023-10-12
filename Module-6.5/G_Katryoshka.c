#include <stdio.h>

int main()
{

    /*
        - Two eyes and one body.
        - Two eyes, one mouth, and one body.
        - One eye, one mouth, and one body.
    */

    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long total = 0;

    if (a >= 1 && b >= 1 && c >= 1)
    {
        long long min = a < b ? a : b;
        min = min < c ? min : c;
        total += min;
        a -= min;
        c -= min;
    }

    if (a >= 2 && c >= 1)
    {
        if (a / 2 >= c) // a = 55, c = 25
        {
            total += c;
            a -= c * 2;
            c = 0;
        }
        else
        { // a = 45, c = 25
            total += (a / 2);
            c -= (a / 2);
            a -= (a / 2);
        }
    }

    printf("%lld", total);

    return 0;
}
