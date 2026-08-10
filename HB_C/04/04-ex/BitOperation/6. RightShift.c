#include <stdio.h>

int main(void)
{
    int num = -16; // 11111111 11111111 11111111 11110000 = -16
    int result1 = num>>1; // ?1111111 11111111 11111111 11111000 = -8 
    int result2 = num>>2; // ??111111 11111111 11111111 11111100 = -4
    int result3 = result2>>2; // ????1111 11111111 11111111 11111111 = -1

    printf ("%d %d %d %d", num, result1, result2, result3);
    /*
    output :  -16, -8, -4, -1
    ? = 1
    */
}