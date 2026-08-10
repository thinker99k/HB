#include <stdio.h>

int Compare(int num1, int num2, int num3);

int main(void)
{
    int num1, num2, num3;
    printf("대소비교를 할 세 정수를 입력하시오\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("가장 큰 정수는 %d입니다\n", Compare(num1, num2, num3));
}

int Compare(int num1, int num2, int num3)
{
    if(num1>num2 && num1>num3)
        return num1;
    else if(num2>num1 && num2>num3)
        return num2;
    else
        return num3;
}
