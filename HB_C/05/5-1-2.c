#include <stdio.h>

int main(void)
{
    double num1, num2; // double = 8byte
    scanf("%lf %lf", &num1, &num2); // scanf double -> %lf
    
    double size1, size2;
    size1 = sizeof(num1), size2 = sizeof(num2);

    printf("size of num1, num2 : %f, %f\n",size1, size2); // printf double -> %f
    printf("num1+num2=%f\nnum1-num2=%f\nnum1*num2=%f\nnum1/num2 = %f\n", num1+num2, num1-num2, num1*num2, num1/num2); 
}