#include <stdio.h>

int main(void)
{
	int arr[5][5] = {0,};

	char *strNAME[4] = {"철희", "철수", "영희", "영수"};
	char *strSUB[4] = {"국어", "영어", "수학", "역사"};
	
	int i, j;

	for(i=0; i<4; i++){
		printf("%s의\n", strNAME[i]);
		for(j=0; j<4; j++){
			printf("%s점수 : ", strSUB[j]);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<4; i++){
		int tmp = 0;
		for(j=0; j<4; j++){
			arr[i][4] += arr[i][j];
		}
	}//학생별 총점 계산
	
	for(j=0; j<4; j++){
		int tmp = 0;
		for(i=0; i<4; i++){
			arr[4][j] += arr[i][j];
		}
	}//과목별 총점 계산
	
	for(i=0; i<4; i++){
		int tmp = 0;
		arr[4][4] += arr[i][4];
	}//arr[4][4] 계산
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}// 출력
	
}