#include <stdio.h>

int main(void)
{
    int num1, num2;
    int result1, result2;
    printf("num1, num2?");
    scanf("%d %d", &num1, &num2);

    result1 = (num1-num2);
    result2 = (num1*num2);

    printf("%d, %d", result1, result2);

    return 0;
}