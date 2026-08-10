#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int arr[6] = {0,};
	
	srand((int)time(NULL));
	for(i=0; i<100000; i++){
		int value = (rand()%6);
		printf("주사위 %d의 결과: %d \n", i, value+1);
		arr[value]++;	
	}
	
	printf("100000번 실행결과\n");
	for(i=0; i<6; i++){
		printf("%d가 나온 횟수 : %d번\n", i+1, arr[i]);
	}
}
