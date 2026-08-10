#include <stdio.h>

void clockwork(int (*ptr)[4])
{
	int tmp[4][4]; // tmp를 int뿐만 아니라 배열로도 선언할수 있다!!
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			tmp[j][3-i] = ptr[i][j];
		}
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			ptr[i][j] = tmp[i][j];
		}
	}
}

void show(int (*ptr)[4])
{
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
		printf("%-3d", ptr[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	int num;
	printf("몇번 회전시켜서 출력? : ");
	scanf("%d", &num);
	
	for(int i=0; i<num; i++){
		clockwork(arr);	
		show(arr);
		printf("\n");
	}
	
}