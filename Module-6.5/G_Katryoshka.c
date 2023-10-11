#include <stdio.h>

long long min(long long num1, long long num2, long long num3)
{
    long long min_value = num1;

    if (num2 < min_value)
    {
        min_value = num2;
    }

    if (num3 < min_value)
    {
        min_value = num3;
    }

    return min_value;
}

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

    while (a >= 1 && c >= 1)
    {
        if (b >= 1)
        {
            long long minNum = min(a, b, c);
            total += minNum;
            a -= minNum;
            b -= minNum;
            c -= minNum;
        }
        else if (a >= 2)
        {
            long long minNum = a <= c ? a : c;
            if (minNum == a)
            {
                total += (a / 2);
                a = 0;
            }
            else
            {
                if (c >= a * 2)
                {
                    total += c;
                    c = 0;
                }
                else
                {
                    total++;
                    a -= 2;
                    c--;
                }
            }
        }
        else
        {
            break;
        }
    }

    printf("%lld", total);

    return 0;
}
