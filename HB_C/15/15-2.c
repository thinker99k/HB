#include <stdio.h>

int main(void)
{
	int num;
	printf("10진수 정수 입력 : ");
	scanf("%d", &num);
	printf("\n");
	int input = num;
	int mok, namoji;
	int rslt = 0;
	
	int i;
	int j = 1;
	
	for ( i = 0 ; ; i++ ){
		mok = input/2;
		namoji = input%2;
		if(mok == 0 && namoji ==0)
			break;
		printf("%d / 2 = %d...%d\n", input, mok, namoji);
		namoji = namoji*j;
		printf("나머지 자릿수맞게 %d\n", namoji);
		rslt += namoji;
		j *= 10;
		input /= 2;
	}
	
	printf("\n10진수 %d -> 2진수 %d\n", num, rslt);
	
}