#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int * ptr = arr; // 배열 arr 할당된 주소의 시작점
	/*
	arr은 긿이정보를 잃어버리고 배열 주소의 시작점만 알려주는 Decay(부식)된 포인터
	*/
	//ptr에는 arr 할당된 주소 시작점 = arr[0] 할당된 주소 시작점 저장됨
	int sum = 0;
	int i;
	
	for ( i = 4 ; i >= 0 ; i-- ){
		sum += *(ptr+i);
	}
	printf ("arr의 합 : %d\n", sum);
}