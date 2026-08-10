#include <stdio.h>

// main함수내의 배열 접근시 배열의 주소 전달인자로 받음
void MaxAndMin(int *arr, int **dp_max, int **dp_min)
{	// p_max, p_min의 주소를 받은 이중포인터
	int *max = &arr[0];
	int *min = &arr[0];
	// 포인터 max, min은 arr[0]의 주소를 가지고있음
	
	int i;
	for(i=0; i<5; i++)
	{
		if(arr[i]>*max)
			max = &arr[i];
		if(arr[i]<*min)
			min = &arr[i];
	}
	// 포인터 max, min은 arr[0]의 주소를 가지고있음
	*dp_max = max; 
	*dp_min = min;
	// 더블포인터 dp_max의 값은 포인터 max의 값 = 최대값의 주소
	// 더블포인터 dp_min의 값은 포인터 min의 값 = 최소값의 주소
}

int main(void)
{
	int *p_max;
	int *p_min;
	// 특정한 주소는 가지고있지 않음, 단순 포인터 선언
	
	int arr[5];
	
	int i;
	for(i=0; i<5; i++){
		printf("%d번째 정수 입력 : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	MaxAndMin(arr, &p_max, &p_min);// 포인터 p_max, p_min의 주소 보내줌(이중포인터 받아야함)
	printf("최대 : %d, 최소 : %d\n", *p_max, *p_min);
	
}