#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int * ptr = arr; // int *ptr = &arr[0];과 같음 -> Decay(부식)됨, 길이정보를 잃어버림
	// 배열 arr가 할당된 메모리의 시작 주소
	int i;
	
	printf("포인터지정 증가 이전 arr : ");
	
	for ( i = 0 ; i <= 4 ; i++ ){
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	for ( i = 0 ; i <= 4 ; i++ ){
		*ptr += 2; // ptr은 int = 가리키는 값이 있는 주소, *ptr은 포인터 ptr이 가리키는 값
		ptr++; // ptr(+0)에서 (ptr+1), 주소는 +8
	}
	// ptr에 저장된 값을
	printf("포인터지정 증가 이후 arr : ");
	
	for ( i = 0 ; i <= 4 ; i++ ){
		printf("%d ", arr[i]);
	}
}