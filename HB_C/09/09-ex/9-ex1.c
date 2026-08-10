#include <stdio.h>
//함수 반환값, 인자전달 연습
void Manual(void)
{
    printf("두개의 정수를 입력하면 그 합이 출력됩니다\n");
}

int Add(int num1, int num2) // 반환값 o(int), 인자전달 o(int num1, int num2)
{
    return num1+num2;
}

int Readnum(void) // 반환값 o(int), 인자전달 x(void)
{
    int num;
    scanf("%d",&num);
    return num;
}

void Showaddresult(int num) // 반환값 x(void), 인자전달 o(int num)
{
    printf("두 정수의 합은 %d 입니다\n", num);
}
// 사실 기능마다 다 쪼개놓은게 너무 극한의 상황을 가정한것이긴 함;
int main(void)
{
    int result, num1, num2;
    Manual();
    num1=Readnum();
    num2=Readnum();
    result=Add(num1, num2);
    Showaddresult(result);
    return 0;
}