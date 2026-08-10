#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("num? \n");
    scanf("%d %d", &num1, &num2);
    int share, remainder;
    share = num1/num2;
    remainder = num1%num2;
    printf("%d / %d = %d ... %d", num1, num2, share, remainder);
}