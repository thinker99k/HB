#include <stdio.h>

void Swap3(int *x, int *y, int*z) // num1, num2, num3의 주소를 받음
{
	int tmp;
	tmp = *(z);
	*(z) = *(y);
	*(y) = *(x);
	*(x) = tmp;
}
// swap 계산시 tmp에 올린 것 먼저 바꿔준다

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	printf("num1 = %d\nnum2 = %d\nnum3 = %d\n", num1, num2, num3);

	Swap3(&num1, &num2, &num3);
	printf("scanf함수 작동후\nnum1 = %d\nnum2 = %d\nnum3 = %d\n", num1, num2, num3);
}