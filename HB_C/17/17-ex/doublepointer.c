#include <stdio.h>

int main(void)
{

	int num = 10;
	int * ptr = &num;
	/*
	int * ptr2 = &ptr;
	이러면 컴파일러 오류 발생 : 정수형 포인터 *ptr2는 정수형 이중 포인터 &ptr을 가질수 없다
	*/
	int ** dptr = &ptr;
	printf("num = %d, *ptr = %d, **dptr = %d", num, *ptr, **dptr);
	
}