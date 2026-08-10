#include <stdio.h>

int main(void){
    int num;
    printf("양의정수 입력 : ");
    scanf("%d", &num);

    switch (num/10) // 몫은 항상 정수
    {
    case 1:
        printf("0 <= 입력값 < 10");
        break;
    case 2:
        printf("10 <= 입력값 < 20");
        break;
    case 3:
        printf("20 <= 입력값 < 30");
        break;
    default:
        printf("입력값 < 0 or 입력값 >= 30");
        break;
    }
}