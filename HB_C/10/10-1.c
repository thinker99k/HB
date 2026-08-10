#include <stdio.h>

int main(void)
{
    unsigned int num;
    printf("양의 정수 입력 : ");
    scanf("%d", &num);
    printf("%d는 16진수로 %#x\n", num, num);
}