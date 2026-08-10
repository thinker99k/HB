#include <stdio.h>

double CtF(double deg);
double FtC(double deg);

int main(void)
{
    double deg;
    int selection;
    printf("원하는 계산 선택\n1. 섭씨(Celsius) -> 화씨(Fahrenheit)\n2. 화씨(Fahrenheit) -> 섭씨(Celsius)\n");
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        printf("섭씨(Celsius)온도를 입력\n");
        scanf("%lf", &deg);
        printf("섭씨 %f도는 화씨 %f도 입니다", deg, CtF(deg));
        break;

    case 2:
        printf("화씨(Fahrenheit)온도를 입력\n");
        scanf("%lf", &deg);
        printf("화씨 %f도는 섭씨 %f도 입니다", deg, FtC(deg));
        break;
    
    default:
        printf("1 아니면 2만 입력해라\n");
    }
}
/*
계산 함수안에서 deg scanf 받지 않기
main이나 다른 함수 하나 더 만들어서 거기서 받아야함
계산 함수안에서 deg 입력 받아도 main함수에 return을 하는것이 아니기 때문에, main의 deg는 garbage value됨
C언어는 return 무조건 하나만 가능!!!!
*/
double CtF(double deg)
{
    return ((1.8*deg)+32);
}

double FtC(double deg)
{
    return ((deg-32)/1.8);
}