#include <stdio.h>

void clockwork(int (*ptr)[4]) // 4swap
{
	int tmp;
	(tmp = ptr[0][0]) && (ptr[0][0] = ptr[3][0]) && (ptr[3][0] = ptr[3][3]) && (ptr[3][3] = ptr[0][3]) && (ptr[0][3] = tmp);
	(tmp = ptr[0][1]) && (ptr[0][1] = ptr[2][0]) && (ptr[2][0] = ptr[3][2]) && (ptr[3][2] = ptr[1][3]) && (ptr[1][3] = tmp);
	(tmp = ptr[1][0]) && (ptr[1][0] = ptr[3][1]) && (ptr[3][1] = ptr[2][3]) && (ptr[2][3] = ptr[0][2]) && (ptr[0][2] = tmp);
	(tmp = ptr[1][1]) && (ptr[1][1] = ptr[2][1]) && (ptr[2][1] = ptr[2][2]) && (ptr[2][2] = ptr[1][2]) && (ptr[1][2] = tmp);
}

int main(void)
{
	int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	int num;
	printf("몇번 회전시켜서 출력? : ");
	scanf("%d", &num);
	
	for(int i=0; i<num; i++){
		clockwork(arr);	
		for(int j=0; j<4; j++){
			for(int k=0; k<4; k++){
			printf("%-3d", arr[j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
}