#include <stdio.h>
// 포인터 이해 너무좋아!!
int main(void)
{
	int arr[3] = {1, 2, 3};
	printf("arr[0]의 값 : %d\n", arr[0]);
	printf("arr[0]의 주소 : %p\n", &arr[0]);

	int *ptr1 = &arr[0]; // = int *ptr = arr;	
	/*
	int *ptr1 = arr[0]; 하면 안됨
	arr이 0x123400에서 시작했을때
	arr : Decay(부식)됨, 배열 주소의 시작점만 가지고있으며 길이에 대한 정보는 잃어버림
	&arr[0] : arr[0]의 할당된 주소의 시작점 
			= arr 할당된 주소의 시작점(포인터상수) = 0x123400
	arr[0] : 배열의 첫번째값 = 1
	이걸 포인터에 대입시 쓰레기값 나옴
	*/
	
	printf("ptr1의 이 가리키는값 : %d\n", *ptr1);
	printf("ptr1의 주소 : %p\n", &ptr1);
	printf("ptr1이 가리키는 주소 %p\n", ptr1);
	// ptr1의 내용은 arr[0]의 주소, 이는 int 취급

}