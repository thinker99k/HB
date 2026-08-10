#include <stdio.h>

void snail(int num, int (*ptr)[num])
{
	int limit = num;

	int y=0, x=-1, ctrl=1, val=0;	
	
	while(1){
		for(int i=0; i<limit; i++){
			x+=ctrl;
			ptr[y][x]=++val;
		}
		limit-=1;
		
		if(val==num*num)
			break;
		
		for(int i=0; i<limit; i++){
			y+=ctrl;
			ptr[y][x]=++val;
		}
		ctrl*=-1;
	}
}

void show(int num, int (*ptr)[num])
{
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			printf("%-4d", ptr[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int num;
	
	printf("N*N 배열, N 입력 : ");
	scanf("%d", &num);
	
	int arr[num][num];
	
	snail(num, arr);
	show(num, arr);
}