#include <stdio.h>

int main(void)
{
	int arr[3] = {1, 2, 3};
	int * ptr = arr;
	
	printf("arr의 크기 : %d\n", sizeof(arr));
	// = 12 (4바이트 int 3개)
	printf("ptr의 크기 : %d\n", sizeof(ptr));
	// = 8 (64비트일경우)
	// = 4 (32비트일경우)
}