#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("문자열 자리수 입력\n");
	scanf("%d", &num);
	getchar();

	char* str = (char*)malloc(sizeof(char)*(num+1));
	
	printf("문자열 입력\n");
	fgets(str, num+1, stdin);
		
	for(int i=num-1; i>=0; i--){
		str[i+1]=str[i];
	}
	str[0] = 32;

	for(int i=num; i>=0; i--){
		if(str[i] == 32){
			for(int j=i+1; ; j++){
				if(str[j] == 0 || str[j] == 32 || str[j] == 10)
					break;
				printf("%c", str[j]);
			}
			printf(" ");
		}
	}
	printf("\n");
		
	free(str);
	
	return 0;
}