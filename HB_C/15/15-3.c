#include <stdio.h>
int main(void)
{
	int arr[10];
	// 배열을 홀수일경우 앞에서부터, 짝수일경우 뒤에서부터 채워나간다
	int i, j=0, k=9;
	for(i=0; i<=9; i++){
		int tmp;
		printf("%d번째 정수입력 : ", i+1);
		scanf(" %d", &tmp);
		
		if(tmp%2!=0){
			arr[j++] = tmp;
			printf("배열의 %d번째는 %d\n\n", j, tmp);
		}// 홀수일경우
		
		else{
			arr[k--] = tmp;
			printf("배열의 %d번째는 %d\n\n", k+2, tmp);
		}// 짝수일경우
	}
	
	printf("배열 요소의 출력 : ");
	for (i=0; i<=9; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}