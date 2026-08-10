#include <stdio.h>

int fib(num);

int main(void)
{
    int num;
    printf("피보나치 수열 몇개 출력? ");
    scanf("%d", &num);
    if(num < 1)
        return -1;
    fib(num);
}

int fib(num)
{
    int a = 0, b = 1, c, i;
    if(num == 1)
        printf("%d ", a);
    else 
        printf("%d %d ", a, b);
    for( i = 0 ; i < num-2 ; i++ )
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
/*
fibonacci logic : b, c를 왼쪽으로 한칸 밀어 a, b로 만듦
a   b   c

0   1   1 출력3
    <<<<<
1   1
1   1   2 출력4
    <<<<<
1   2
1   2   3 출력5
    <<<<<
2   3
2   3   5 출력6
    <<<<<
3   5
3   5   8 출력7
    <<<<<
...
*/

}