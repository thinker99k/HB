#include <stdio.h>
//static 쓰지말고!

void printodd(int *ptr)
{
	int i;
	for( i = 0 ; i <= 9 ; i++ )
	{
		if(*(ptr+i)%2==0)
			printf("%d ", *(ptr+i));
	}

}

void printeven(int *ptr)
{
	int i;
	for( i = 0 ; i <= 9 ; i++ )
	{
		if(*(ptr+i)%2==1)
			printf("%d ", *(ptr+i));	
	}
}

int main(void)
{
	int arr[10];
	
	int i;
	
	printf("총 10개의 숫자 입력\n");
	for( i = 0 ; i <= 9 ; i++ )
	{
		printf("%d번째 입력 : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("홀수 출력: ");
	printodd(arr);
	printf("짝수 출력: ");
	printeven(arr);
	printf("\n");
}