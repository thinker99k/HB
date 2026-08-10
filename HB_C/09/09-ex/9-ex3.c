#include <stdio.h>

int Fac(int n)
{
    if(n == 0)
        return 1;
    else
        return n*Fac(n-1);
}

int main(void)
{
    int n;
    printf("팩토리얼 구할 숫자 입력 : ");
    scanf("%d", &n);
    printf("%d의 팩토리얼은 %d\n", n, Fac(n));
}