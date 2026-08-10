#include <stdio.h>

int Prime(int x) // 소수일때만 return
{
    int a;

    for( a = 2 ; a < x ; a++ )
    {
        if(x % a == 0)// x가 1 이외의 수로 나눠떨어지면 0 return
            return 0;   
    }
    return 1; // x가 x-1로 나눴을때까지 안나눠떨어지면 1 return
} // 함수는 하나의 값만 return 할수 있는것을 이용!
/*
int main(void)
{
    int i = 2, j = 1;

    while(j<=10)
    {
        if(Prime(i) == 1)
            printf("%d ", i) && j++ ;
        i++;
    }   
}
*/
int main(void)
{
    int i = 2, j;
    for( j = 1 ; j <= 10 ; i++ )
    {    
        if(Prime(i) == 1)
            printf("%d ", i) && j++;
    }
}
/*
N개의 소수가 출력되려면 소수 출력시에 j++
for문 j++시 printf와 상관없이 사이클마다 무조건 j++
*/