#include <stdio.h>

int main(void)
{
    int num1 = 9;

    while(num1>1)
    {
        int num2 = 9;
        while(num2>0)
        {
            printf("%d*%d=%d\n",num1, num2, num1*num2);
            num2--;
        }
        num1--;
    }
    return 0;
}