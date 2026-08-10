#include <stdio.h>
//재귀함수 존나어렵네
int multiple(int x) // i -> x
{
    if(x==0)
        return 1;
    return 2*multiple(x-1);
}
/*
i = x = 8이라 했을때
multiple(8)
= 2*multiple(7)
= 2*2*multiple(6)
= 2*2*2*multiple(5)
...
= 2*2*2*2*2*2*2*2*multiple(0)
= 2*2*2*2*2*2*2*2*1
*/

int main(void)
{
    int i;
    printf("정수입력 : ");
    scanf("%d", &i);
    printf("2의 %d승은 %d", i, multiple(i));
}