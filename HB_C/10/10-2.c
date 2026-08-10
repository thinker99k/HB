#include <stdio.h>

void gugudan(int x, int y)
{
    for(  ; x <= y ; x++ )
    {
        int i;
        for( i = 1 ; i < 10 ; i++ )
            printf("%d * %d = %d\n", x, i, x*i);
    }
}

int main(void)
{
    int a, b;

    printf("두 수 사이의 구구단 출력, 두 수 입력\n");
    scanf("%d %d", &a, &b);

    if(a<b)
        gugudan(a, b);
    else if(a>b)
        gugudan(b, a);
    else
        gugudan(a, a);
}