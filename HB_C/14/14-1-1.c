#include <stdio.h>

int SquareByValue(int x)
{
	x *= x;
	return x; 
}

void SquareByAddress(int *x)
{
	*(x) *= *(x);
}

int main(void)
{
	int num;
	
	printf("제곱할 수 입력 : ");
	scanf("%d", &num);
	
	printf("SquareByValue 함수 적용 결과 : %d\n",	SquareByValue(num));
	
	SquareByAddress(&num);
	printf("SquareByAddress 함수 적용 결과 : %d\n", num);
}