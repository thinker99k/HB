#include <stdio.h>

int main(void)
{
    int num1 = 10, num2 = 20;
    int *p_1 = &num1;
    int *p_2 = &num2;
    int *p_temp;
    (*p_1)+=10;
    (*p_2)-=10;
/*
    p_temp = p_1;
    p_1 = p_2;
    p_2 = p_temp;
    임시 공간을 주고 포인터끼리 전달해주는식
*/
/*
    잘못된 포인터 접근
    p_1 = num2;
    p_2 = num1;
*/
    p_1 = &num2; // 이 상황에서는 p_1, p_2 둘다 num2의 주소를 가짐
    p_2 = &num1; // 여기까지 오면 p_1은 num2의, p_2는 num1의 주소를 가짐
    printf("%d %d\n", num1, num2);
}