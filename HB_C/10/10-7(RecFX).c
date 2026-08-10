#include <stdio.h>
// x = 169라 가정, 169 = 2*7 + 41
int multiple(int x)
{
    static int i = 0;
    if(x==1)
        return i; // 계속 나누다 최종적으로 i를 return하게 됨
    i++;
    return multiple(x/2);
}
/*
x  /2몫 나머지  i
                0
169 64  41      1
64  32  0       2
32  16  0       3
16  8           4
8   4           5
4   2           6
2   1           7
if문 걸림 -> return

*/
int main(void)
{
    int n;
    printf("2^k<=n\n1이상의 N 입력 ");
    scanf("%d", &n);
    printf("가장 큰 k는 %d\n", multiple(n));
}