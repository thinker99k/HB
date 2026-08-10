#include <stdio.h>

int main(void)
{
    int num1;
    printf("num? \n");
    scanf("%d", &num1);
    int result = ~num1;
    printf("%d", ++result);

}