#include <stdio.h>

typedef struct
{
	int x;
	int y;
} STR;

void function1(STR* p_arr)
{	
	printf("size of function1 p_arr : %ld\n", sizeof(*p_arr));
	for(int i=0; i<3; i++){
		p_arr[i].x *= p_arr[i].x;
		p_arr[i].y *= p_arr[i].y;
	}
}

void function2(STR (*p_arr)[3]) // decay 되지않은 포인터
{
	printf("size of function2 p_arr : %ld\n", sizeof(*p_arr));
	for(int i=0; i<3; i++){
		(*p_arr+i)->x++; // int 크기만큼 이동한듯?
		(*p_arr)[i].y++; // arr[i]
		// 이걸 어떻게 *(arr+i)로 바꾸지??
	}
}

int main(void)
{
	STR arr[3] = {{1,2}, {2,4}, {3,6}}; // 크기 24
	
	STR* ptr1 = arr;
	STR (*ptr2)[3] = &arr;
	
	printf("size of str1 : %ld\n", sizeof(*ptr1));
	printf("size of str2 : %ld\n", sizeof(*ptr2)); // decay 되지않은것 확인!
	
	for(int i=0; i<3; i++){
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
	
	function1(arr);
	printf("function1 함수 작동\n");
	for(int i=0; i<3; i++){
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
	
	function2(&arr);
	printf("function2 함수 작동\n");
	for(int i=0; i<3; i++){
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
	
}