#include <stdio.h>

int main(void)
{
	int arr[3] = {1, 2, 3};
	printf("arr[0]의 값 %d\n", arr[0]);
	printf("arr[0]의 주소 %p\n", &arr[0]);
	
	int *p_arr0_add = &arr[0]; // p_arr0_add 포인터는 arr[0]의 주소
	printf("p_arr0_add의 값 %d\n", *p_arr0_add);
	printf("p_arr0_add가 가리키는 주소 %p\n", p_arr0_add);
	printf("는 arr[0]의 주소 %p와 같다\n", &arr[0]);
	printf("p_arr0_add의 주소 %p\n", p_arr0_add);
	
	int *p_arr0_add_plus4 = p_arr0_add+1; // p_arr0_add_plus4 포인터는 arr[0]의 주소+4, 자료형의 크기만큼 더해짐 (다음 바이트로 넘어감)
	printf("arr[0]+4의 값 %d\n", *p_arr0_add_plus4);
	printf("arr[0]+4가 가리키는 주소 %p\n", p_arr0_add_plus4);
	printf("는 arr[1]의 주소 %p와 같다\n", &arr[1]);
	printf("arr[0]+4의 주소 %p\n", &p_arr0_add_plus4);
/*
int *p_1 = &arr[0]이라 하자.
p_1은 arr[0]의 주소(int)를
*p_1은 arr[0]의 값(int)을
&p_1은 p_1의 주소(int)를 뜻한다.
*/
	
}