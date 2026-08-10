#include <stdio.h>

int main(void)
{
	int onedarr[3] = {1,2,3}; // 크기 12
	
	int* onedptr1 = onedarr;
	printf("size of onedptr1 : %ld\n", sizeof(*onedptr1));
	// 첫 요소의 크기로 decay됨 = 크기 4
	
	int (*onedptr2)[3] = &onedarr;	
	printf("size of onedptr2 : %ld\n", sizeof(*onedptr2));
	// decay 되지않은것 확인! = 크기 12
	
	*(onedptr1) = 0;
	*(*onedptr2+1) = 0; // *(arr+i)
	(*onedptr2)[2] = 0; // arr[i]
	
	printf("%d %d %d\n\n", onedarr[0], onedarr[1], onedarr[2]);
	
	
	int twodarr[2][3] = {{1,2,3},{4,5,6}}; // 크기 24
	
	int* twodptr0 = twodarr;
	/*
	"twodarr"는 1행3열짜리 포인터 전달 = 크기 12
	위와같이 선언시 포인터 초기화는 잘못된 문법, 컴파일 경고 발생
	*/
	printf("size of twodptr0 : %ld\n", sizeof(*twodptr0));
	
	int* twodptr1 = &twodarr[0][0];
	// twodarr[0][0]의 주소(배열의 시작주소)를 가리킴 = 크기 4
	printf("size of twodptr1 : %ld\n", sizeof(*twodptr1));
	// 전달된 twodarr[0][0]의 크기 출력
	
	int (*twodptr2)[3] = twodarr;
	// twodarr는 1행3열짜리 포인터 전달 = 크기 12
	printf("size of twodptr2 : %ld\n", sizeof(*twodptr2));
	// 1행의 크기로 decay, 행 수 미정, 열 수 고정[3], 행의 크기 출력
}