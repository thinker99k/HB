#include <stdio.h>

int main(void)
{
    int num1 = 0b01010111, num2 = 0b00110011; // 0b means Binary
    printf("%d %d", num1, num2);
}
/*
10101001
01010111 : 01010110 + 1
(1)00000000

11110000
00010000 : 00001111 + 1
(1)00000000
*/