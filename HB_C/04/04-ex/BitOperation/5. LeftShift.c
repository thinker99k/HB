s#include <stdio.h>

int main(void)
{
    int num = 15; // 00000000 00000000 00000000 00001111
    int result1 = num<<1; // 00000000 00000000 00000000 00011110 = 30
    int result2 = num<<2; // 00000000 00000000 00000000 00111100 = 60
    int result3 = result2<<2; // 00000000 00000000 00000000 11110000 = 240

    printf ("%d %d %d", result1, result2, result3);

}