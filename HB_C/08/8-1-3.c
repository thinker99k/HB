#include <stdio.h>

int main(void)
{
    double l, m, n, avg;

    printf("정수 세개 입력\n");
    scanf("%lf %lf %lf", &l, &m, &n);
    avg = (l+m+n)/3;
    printf("성적의 평균 : %f -> ", avg);

    if(avg>=90)
        printf("A 학점\n");
    else if(avg>=80)
        printf("B 학점\n");
    else if(avg>=70)
        printf("C 학점\n");
    else if(avg>=50)
        printf("D 학점\n");
    else
        printf("과락!\n");
}