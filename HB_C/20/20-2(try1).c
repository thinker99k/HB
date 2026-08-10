#include <stdio.h>

int main(void)
{
	int num;
	
	printf("N*N 배열, N 입력 : ");
	scanf("%d", &num);
	
	int arr[num][num];
	int	*ptr = &arr[0][0];
	
	int limit = num;
	int value = 1; // 배열에 실질적으로 들어갈 숫자
	int Hcount = 1;
	int Vcount = 1;

	int i;
	while(value<=num*num){
		if(Hcount%2!=0){ // 가로이동이 홀수번째=우향일때 +1
			for(i=0; i<limit; i++){
				*(ptr+i) = value++;
			}
			ptr = ptr+limit-1+num; // 한칸 아래 포인터 전달
		}
		else{ // 가로이동이 짝수번째=좌향일때 -1
			for(i=0; i<limit; i++){
				*(ptr-i) = value++;
			}
			ptr = ptr-limit+1-num; // 한칸 위 포인터 전달
		}
		Hcount++;

		--limit;
		
		if(Vcount%2!=0){ // 세로이동이 홀수번째=하향일떄 +num
			for(i=0; i<limit; i++){
				*(ptr+(i*num)) = value++;
			}
			ptr = ptr+num*(limit-1)-1; // 한칸 왼쪽 포인터 전달
		}
		else{ // 세로이동이 짝수번째=상향일때 -num
			for(i=0; i<limit; i++){
				*(ptr-(i*num)) = value++;
			}
			ptr = ptr-num*(limit-1)+1; // 한칸 오른쪽 포인터 전달
		}
		Vcount++;
	}
	
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}
}