#include <stdio.h>

void SwapFail(int *p1, int *p2)
{
	int * temp=p1;
	p1=p2;
	p2=temp;
}

void SwapSuccess(int **p1, int **p2) // p1, p2의 주소를 받음
{
	int *temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(void)
{
	int num1=10, num2=20;
	int *ptr1 = &num1, *ptr2 = &num2;
	printf("num1, num2: %d %d \n", num1, num2);
	printf("*ptr1, *ptr2: %d %d \n\n", *ptr1, *ptr2);
	
	SwapFail(ptr1, ptr2); // num1, num2의 주소를 함수로 보냄
	printf("num1, num2: %d %d \n", num1, num2);
	printf("*ptr1, *ptr2: %d %d \n\n", *ptr1, *ptr2);
	
	SwapSuccess(&ptr1, &ptr2); // ptr1, ptr2의 주소를 함수로 보냄
	printf("num1, num2: %d %d \n", num1, num2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	
	return 0;
}