#include <stdio.h>

void DesSort(int *ptr)
{
	int i, j;
	int tmp;
	
	for(i=6; i>=0; i--){
		for(j=6; j>0; j--){
			if(*(ptr+(j-1))<*(ptr+j)){
				tmp = *(ptr+j);
				*(ptr+j) = *(ptr+(j-1));
				*(ptr+(j-1)) = tmp;
			}
		}
	}
}

int main(void)
{
	int arr[7];
	int i;
	
	for(i=0; i<7; i++){
		printf("%d번째 정수 입력 : ", i+1);
		scanf(" %d", &arr[i]);
	}
	
	DesSort(arr); // arr의 주소를 DesSort 함수로 전달
	
	printf("내림차순 출력 : ");
	for(i=0; i<7; i++){
	printf("%d ", arr[i]);	
	}
	printf("\n");
	
}