#include <stdio.h>

int main(void)
{
	FILE* fileptr1 = fopen("data.txt", "wt");
	FILE* fileptr2 = fopen("data.txt", "rt");

	if( fileptr1 == NULL || fileptr2 == NULL ){
		puts("파일 오픈 실패!");
		return -1;
	}
	
	for(int i=0; i<3; i++){
		int ch = i+65;
		fputc(ch, fileptr1);
	}
	
	for(int i=0; i<3; i++){
		int ch = fgetc(fileptr2);
		printf("%c ", ch);
	}
	
	fclose(fileptr1);
	fclose(fileptr2);

	return 0;
}