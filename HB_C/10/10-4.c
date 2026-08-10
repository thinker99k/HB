#include <stdio.h>

void choices(int p)
{
    int a, b, c; // a는 500원, b는 700원, c는 400원
    for( a = 1 ; a < 8 ; a++ )
    {
        for( b = 1 ; b < 6 ; b++ )
        {
            for( c = 1 ; c < 9 ; c++ )
            {
                if(500*a+700*b+400*c == 3500)
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", a, b, c);
            }
        }       
    }
}

int main(void)
{
    printf("현재 소유금액 : 3500\n");
    choices(3500);
    printf("어떻게 구입?\n");
}