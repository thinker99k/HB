#include <stdio.h>

int main(void)
{
    int num1, num2, num3, result;
    // dont declare result in here; there's no value in now, it'll cause overflow
    printf("num? \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1*num2+num3;

    printf("%d * %d + %d = %d \n", num1, num2, num3, result);
}