#include <stdio.h>

int main(void)
{
    int num, sum = 0, i = 0;
    while(i<5)
    {
        printf("input number (%d/5) : \n", i+1);
        scanf("%d", &num);
        while(num>0)
            {
                sum += num;
                i++;
                break;
            }
        printf("sum : %d\n", sum);
    }
    printf("sum of 5 numbers : %d \n", sum);
}