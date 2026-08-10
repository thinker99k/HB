#include <stdio.h>

long calcfilesize(FILE* fp)
{
	long fpos;
	
	while(1){
		fpos = ftell(fp);
		char buf = fgetc(fp);
		// 스트림 대상이 텍스트파일인 경우 텍스트 파일 내용 출력
		
		if(buf==EOF) 
			break;
		/*
		if문 조건에서 fgetc 쓰면 안됨!!
		fputc fgetc 전부 파일포인터 한개씩 이동
		EOF 확인하려 if문 조건에서 fget쓰면 while문 1사이클당 파일포인터 2개씩 이동
		-> putchar 한칸씩 건너뛰어서 작동
		*/
		
		putchar(buf); // 스트림 대상이 텍스트가 아닐경우 주석처리!
	}
	printf("\n포인터 위치 : %ld\n", fpos);
	
	long fpos_reset = fseek(fp, 0, 0);
	
	printf("파일포인터 초기화 후 위치 : %ld\n", fpos_reset);

	return fpos;	
}


int main(void)
{
	FILE* fp = fopen("whatsmysize.txt", "rb");
	if( fp == NULL ){
		puts("파일 오픈 실패!");
		return -1;
	}
	
	printf("파일의 사이즈는 %ldbyte 입니다\n",calcfilesize(fp));

	fclose(fp);
	
	return 0;
}