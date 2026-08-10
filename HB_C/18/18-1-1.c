#include <stdio.h>

int main(void)
{
	int* arr1[5];// 배열 arr1은 int*형을 담아야함
	int** ptr1 = arr1; // 변수 ptr1은 int**형 포인터를 담아야함
	
	int* arr2[3][5];// 배열 arr2은 int*형을 담아야함
	int* (*ptr2)[5] = arr2; 
	/*
	변수 ptr2는 포인터를 담고있는 배열 arr의 포인터를 담아야함
	= 변수 ptr2는 int**형 포인터를 담아야함
	
	괄호때문에 햇갈릴수도 있는데
	(*ptr2)[N]은 정의라 이대로 써야만 함
	괄호는 단순 문법!!!!
	*/

	int i, j;
	for(i=0; i<5; i++){
		printf("%p ", *ptr1+i);
	}
	printf("\n\n");
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("%p ", ptr2[i][j]);
		}
		printf("\n");
	}
}