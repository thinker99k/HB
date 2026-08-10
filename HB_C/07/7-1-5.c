#include <stdio.h>

int main(void)
{
    int n, i=0;
    double input, sum = 0.00; //while문 안에서만 쓰이는 변수 아니면 밖에서 먼저 선언해줘야함

    printf("how many times? ");
    scanf("%d",&n);

    while(i++<n)
    {
        printf("input integer %d \n", i);
        scanf("%lf", &input);
        sum += input;
    }
    printf("average is %f\n", sum/n); //ㅇㅇ 여기서 쓰임
    return 0;
}