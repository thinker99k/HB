#include <stdio.h>
/*num을 적절히 초기화하여 while문이 참이 되게 해야함
사실 7-1-3과 같음*/
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