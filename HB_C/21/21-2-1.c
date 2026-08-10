#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[101];
	
	printf("100글자 이하의 숫자가 섞인 글을 입력하세요\n");
	fgets(str, sizeof(str), stdin); // str[100]은 \0(null)

	int endpoint = strlen(str)-1;
	str[endpoint] = 0; // 마지막 \n(ascii 10) => null(ascii 0)

	int sum = 0;
	
	for(int i=0; i<endpoint; i++){
		if(str[i]>47 && str[i]<58){
			sum += str[i]-48;
		}
	}
	
	printf("글 속 숫자들의 합 : %d\n", sum);
	
}