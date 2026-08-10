#include <stdio.h>

long calcfilesize(FILE* fp)
{
	fseek(fp, 0, 2);
	long fpos = ftell(fp);
	
	printf("포인터 위치 : %ld\n", fpos);
	
	fseek(fp, 0, 0);
	long fpos_reset = ftell(fp);
	
	printf("파일포인터 초기화 후 위치 : %ld\n", fpos_reset);

	return fpos;
}


int main(void)
{
	FILE* fp = fopen("whatsmysize.png.bin", "rb");
	if( fp == NULL ){
		puts("파일 오픈 실패!");
		return -1;
	}
	
	printf("파일의 사이즈는 %ldbyte 입니다\n",calcfilesize(fp));
	
	fclose(fp);
	
	return 0;
}