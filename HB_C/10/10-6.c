#include <stdio.h>
// 1m = 60s, 1h = 60m = 3600s
int main(void)
{
    int num, s, m, h;
    printf("초를 입력하시오 : ");
    scanf("%d", &num);
    h = num/3600, m = (num%3600)/60, s = ((num%3600)%60)%60;
    printf("h:%d m:%d s:%d\n", h, m, s);
}