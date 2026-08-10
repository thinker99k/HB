#include <stdio.h>

int main(void)
{
    int num1 = 12; //00000000 00000000 00000000 00001100
    int num2 = ~num1; //11111111 11111111 11111111 11110011
    /*
    ~ operator
    inverse 0 and 1
    
    how can check size of negative binary easily
    11111111 11111111 11111111 11110011
    calculate two's complement
    00000000 00000000 00000000 00001100 +1

    00000000 00000000 00000000 00001101 = 13
    11111111 11111111 11111111 11110011 = -13
 (1)00000000 00000000 00000000 00000000                                  
    */
    printf("%d", num2); // -13
}