#include <stdio.h>

int Compare(int num1, int num2);
int AbsoValue(int num);

int main(void)
{
    int num1, num2, result;
    printf("절대값이 다른 두 수를 입력하시오\n");
    scanf("%d %d", &num1, &num2);
    result = Compare(num1, num2);
    printf("%d와 %d중 절대값이 큰 수는 %d입니다\n", num1, num2, result);
    return 0;
}

int Compare(int num1, int num2) // 여기의 num1, num2는 main에서 scanf한 두 int 인자전달 받음
{
    if(AbsoValue(num1)>AbsoValue(num2)) // absovalue 적용된 num1, num2의 대소비교
        return num1; // absovalue 적용되지 않은 원래의 int return
    else
        return num2;
}

int AbsoValue(int num) // 음수일경우 양수로 만들어 Compare 함수에 전달 예정
{
    if (num<0)
        return num*(-1);
    else
        return num;
}