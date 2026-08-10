#include <stdio.h>

int main(void)
{
    int num=1;
    int input;
    scanf("%d", &input);
    while(num<=input)
    {
        printf("%d \n", 3*num);
        num++;
    }
}