#include <stdio.h>

void NotSwap(int x, int y)
{
	int tmp=x;
	x=y;
	y=tmp;
}
// call-by-value -> main 함수의 요소 변화 X


// void인 이유 : 주소에 직접 접근해서 값 바꾸기때문에 return할것 없어도 됨
void Swap1(int * x, int * y)
// &(주소 전달)통해 전달된 배열요소 arr[i], arr[5-i]의 주소를 받음
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
} //call-by-address


// void인 이유 : 주소에 직접 접근해서 값 바꾸기때문에 return할것 없어도 됨
void Swap2(int * x, int * y)
// 포인터 ptr1, ptr2에 저장된 값(가리키는 주소)를 받음
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
} //call-by-address, C에는 call-by-reference 없음!!!

/*
main 외부 함수에서 main함수 내의 변수에 직접 접근은 불가능!!
함수 Swap1, 2 당연히 main 함수 내의 변수에 접근은 불가능
하지만 같은 프로그램 내에 돌아가고있기에 변수의 메모리주소는 받을수있음
전달받은 주소에 접근하여 직접 값 수정
*/


int main(void)
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int i;
	
	printf("배열 arr은 다음과 같다 : ");
	for( i = 0 ; i <= 5 ; i++ ){
		printf("%d", arr[i]);
	}// 123456 출력
	printf("\n");
	
	for( i = 0 ; i <= 2 ; i++ ){
		NotSwap(arr[i], arr[5-i]);
	}
	printf("함수 NotSwap 실행결과 : ");
	for( i = 0 ; i <= 5 ; i++ ){
		printf("%d", arr[i]);
	}// 값 변화 X, 123456 출력
	printf("\n");
		
	for( i = 0 ; i <= 2 ; i++ ){
		Swap1(&arr[i], &arr[5-i]);
		// Swap1은 배열요소의 주소를 직접 전달해줌
	}
	printf("함수 Swap1 실행결과 : ");
	for( i = 0 ; i <= 5 ; i++ ){
		printf("%d", arr[i]);
	}// 값 변화 O, 654321 출력
	printf("\n");
	
	int *ptr1 = &arr[0], *ptr2 = &arr[5];
	// 함수 Swap2에 쓰일 포인터 정의
	
	for( i = 0 ; i <= 2 ; i++ ){
		Swap2(ptr1+i, ptr2-i);
		// Swap2는 포인터에 저장된 값(배열요소의 주소)을 전달해줌
	}
	printf("함수 Swap2 실행결과 : ");
	for( i = 0 ; i <= 5 ; i++ ){
		printf("%d", arr[i]);
	}// 값 변화 O, 123456 출력
	printf("\n");
}