#include <stdio.h>

int main(void)
{
	char str[100];
	printf("영단어를 입력하세요 : ");
	scanf("%s", str);
	
	int i, length;
	for(i=0; str[i]!=0; i++){
        length++;
    }
	printf("입력받은 문자열의 크기는 %d입니다\n", length);
	
	for(i=0; i<length/2; i++){
		if(str[i]!=str[(length-1)-i]){
			printf("%s는 회문이 아닙니다\n", str);
			return 0;
		}
	}
	printf("%s는 회문입니다\n", str);

}