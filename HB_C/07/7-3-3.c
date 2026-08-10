#include <stdio.h>
// 구구단 while 대신 do while로
int main(void)
{
    int i = 2, j = 1;
    do //i가 [2-9]에서 실행
    {
        do //j가 [1-9]에서 실행
        {
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        } while (j <= 9);
    i++;
    j = 1;
    } while (i <= 9);
}