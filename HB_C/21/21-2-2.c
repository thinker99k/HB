#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];
	
	printf("첫번째 문자열 입력\n");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1] = 0; // \n -> \0
		
	printf("두번째 문자열 입력\n");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2)-1] = 0; // \n -> \0
	
	strncpy(str3, str1, sizeof(str1)); // 널문자 전제됨
	strncat(str3, str2, sizeof(str2)); // 널문자 전제됨

	puts(str3);
}