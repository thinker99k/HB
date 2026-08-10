#include <stdio.h>

int GongYakSu(int x, int y) // x < y 되고나서 입력 받음
{
    int gys, i;
    for( i = 1 ; i <= x ; i++ )
    {
        if(x%i==0 && y%i==0)
            gys = i;
    }
    return gys; // 되도록이면.. main함수 이외의 함수에서는 연산만 하는 식으로 하자
}

int main(void)
{
    int a, b;

    printf("최대공약수를 구할 두 수를 입력\n");
    scanf("%d %d", &a, &b);
    
    if(a<b)
        printf("%d와 %d의 최대공약수는 %d", a, b, GongYakSu(a, b));
    else
        printf("%d와 %d의 최대공약수는 %d", a, b, GongYakSu(b, a));
}