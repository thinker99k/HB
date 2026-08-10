#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = &arr[0]; // int *ptr = arr;과 같음
	// arr[0]가 할당된 메모리의 시작 주소
	int i;
	
	printf("포인터지정 증가 이전 arr : ");
	
	for ( i = 0 ; i <= 4 ; i++ ){
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	for ( i = 0 ; i <= 4 ; i++ ){
		*(ptr+i) += 2;
	}
	
	printf("포인터지정 증가 이후 arr : ");
	
	for ( i = 0 ; i <= 4 ; i++ ){
		printf("%d ", arr[i]);
	}
}