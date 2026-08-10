#include <stdio.h>

int main(void)
{
	int arrA[2][4]={{1, 2, 3, 4}, {5, 6, 7, 8}};
	int arrB[4][2];
	
	int i, j;
	
	printf("arrA는 아래와 같다\n");
	for(i=0; i<2; i++){
		for(j=0; j<4; j++){
			printf("%-4d", arrA[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<4; j++){
			arrB[j][i]=arrA[i][j];
		}
	}
	
	printf("arrB는 아래와 같다\n");
	for(i=0; i<4; i++){
		for(j=0; j<2; j++){
			printf("%-4d", arrB[i][j]);
		}
		printf("\n");
	}
}