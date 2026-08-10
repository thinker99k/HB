#include <stdio.h>

int main(void)
{
    int num1 = 12; //00000000 00000000 00000000 00001100
    int num2 = 15; //00000000 00000000 00000000 00001111
    int num3 = num1 ^ num2;
    /*
    ^ operator
    A^B
    A = B -> return 0, A =/= B -> return 1
    Detect Difference

    0^0 -> return 0
    0^1 -> return 1
    1^0 -> return 1
    1^1 -> return 1
    
    12 ^ 15 : 1100 ^ 1111
    return 0011 
    */
    printf("%d", num3);
}