#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int * ptr = &arr[4];
	// ptr에는 arr[4] 할당된 주소의 시작점 저장됨
	int sum = 0;
	int i;
	
	for ( i = 4 ; i >= 0 ; i-- ){
		sum += *(ptr--); 
		// ptr은 arr[4] 할당된 주소의 시작점 저장됨
		// ptr-- : arr[4]의 주소에서 8씩 감소
	}
	
	printf ("arr의 합 : %d\n", sum);
}