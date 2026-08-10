#include <stdio.h>

int main(void)
{
	FILE* source = fopen("clogo.png.bin", "rb");
	FILE* target = fopen("clogo_copied.png.bin", "wb");
	if( source == NULL || target == NULL ){
		puts("파일 오픈 실패!");
		return -1;
	}

	char bufferarr[4];
	
	//int readcount;
	
	while(1){
		int readcount = fread((void*)bufferarr, sizeof(char), sizeof(bufferarr), source); 	// fread는 size_t 반환
		
		if(readcount<sizeof(bufferarr)){ // 버퍼가 전부 차지 않았을때
			if(feof(source)!=0){
				fwrite((void*)bufferarr, sizeof(char), sizeof(bufferarr), source);
				puts("파일 복사 완료!");
				break;
			}
			else{
				puts("파일 복사 실패!");
			}
			
			break;
		}
		
		fwrite((void*)bufferarr, sizeof(char), sizeof(bufferarr)/sizeof(char), target);
	}
	
	fclose(source);
	fclose(target);
	return 0;
}