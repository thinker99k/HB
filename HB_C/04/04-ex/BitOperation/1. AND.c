#include <stdio.h>

int main(void)
{
    int num1 = 12; //00000000 00000000 00000000 00001100
    int num2 = 15; //00000000 00000000 00000000 00001111
    int num3 = num1 & num2;
    /*
    & operator
    A&B
    both A and B is 1 -> return 1

    0&0 -> return 0
    0&1 -> return 0
    1&0 -> return 0
    1&1 -> return 1

    12 & 15 : 1100 & 1111
    return 1100 = 12
    */
    printf("%d", num3);
}