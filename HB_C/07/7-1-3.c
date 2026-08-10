#include <stdio.h>

int main(void)
{
    int sum = 0;
    int num;
    while(num!=0)
    {
        scanf("%d", &num);
        sum+=num;
    }
    printf("sum is %d \n", sum);
}