#include <stdio.h>

int main(void)
{
	char *text = "hello, world!\n"; // 상수 형태 문자열(포인터)
	/*
	*text = hello, world!
	text = hello, world!가 저장된 주소
	&text = text포인터의 주소
	*/
	printf(text);
	printf("문자열의 주소 %p\n", text);
	printf("포인터의 주소 %p\n", &text);
}