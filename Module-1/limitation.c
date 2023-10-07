#include <stdio.h>

int main()
{
    int num = 10;          // 4 bytes -> 10^9 (Format Specifier - %d)
    long long bigNum = 10; // 8 bytes -> 10^18 (Format Specifier - %lld)

    float floatingNum = 10.5;         // 4 bytes (Format Specifier - %f)
    double bigFloatingNum = 10.55555; // 8 bytes (Format Specifier - %lf)

    return 0;
}

/*
    # Data Type Limitation Caculation:

    1 byte = 8 bit.
    n bit can hold 2^n numbers

    8 bit -> 2^8 = 256 numbers (8 bit can hold 256 numbers)

    1 byte = 256 numbers
    4 byte = 4*8 = 32 bit
    2^32 = 4294967296 numbers (4 byte can hold 256 numbers)

    _ref: 10th Tutorial
*/