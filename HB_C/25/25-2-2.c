#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* numbers = (int*)malloc(sizeof(int)*5); // 크기 20
	
	int i = 0, sum = 0;
	
	while(1){
		if(i>4 && (i%3 == 2)){
			numbers = (int*)realloc(numbers, sizeof(int)*(i+3));
			printf("i=%d, realloc 작동!\n%p\n", i, numbers);
		}
				
		printf("i=%d, 정수 입력", i);
		scanf("%d", &numbers[i]);
		if(numbers[i] == -1) // tmpnum 만들어서 처리는 좋지않다, 배열내에서 처리할것
			break;
		i++;
	}
	
	for(int j=0; j<i; j++){
		printf("numbers[%d] = %d\n", j, numbers[j]);
	}
	
	free(numbers);
	
	return 0;
}
