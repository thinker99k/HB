#include <stdio.h>

int main(void)
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int *ptr1 = &arr[0], *ptr2 = &arr[5];
	int i;
	int tmp = 0;
	
	for( i = 0 ; i <= 2 ; i++ ){	// 	i = 0일때 arr[0], tmp, arr[5]
		printf("arr[%d] : %d, tmp = %d, arr[%d] : %d\n", i, arr[i], tmp, 5-i, arr[5-i]);
		tmp = *(ptr1+i); 			//  1	1	6
		printf("arr[%d] : %d, tmp = %d, arr[%d] : %d\n", i, arr[i], tmp, 5-i, arr[5-i]);
		*(ptr1+i) = *(ptr2-i);		//  6	1	6
		printf("arr[%d] : %d, tmp = %d, arr[%d] : %d\n", i, arr[i], tmp, 5-i, arr[5-i]);
		*(ptr2-i) = tmp;			//  6	1	1
		printf("arr[%d] : %d, tmp = %d, arr[%d] : %d\n", i, arr[i], tmp, 5-i, arr[5-i]);
		printf("\n");
	}
	// ** = 연산자 진행방향 <-(왼쪽) **
	printf("arr : ");
	for( i = 0 ; i <= 5 ; i++ ){
		printf("%d ", arr[i]);
	}
	printf("\n");
}