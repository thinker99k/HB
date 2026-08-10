#include <stdio.h>

int main(void)
{
	FILE* fp1 = fopen("24-1mystory.txt", "wt");
	FILE* fp2 = fopen("24-1mystory.txt", "at");
	FILE* fp3 = fopen("24-1mystory.txt", "rt"); 

	if( fp1 == NULL || fp2 == NULL ){
		printf("파일오픈 실패!");
	}
	
	char* identity1[3] = {"#이름 : 윤성우\n", 
						  "#주민등록번호 : 900208-1012589\n", 
						  "#전화번호 : 010-1234-5678\n"};
	for(int i=0; i<3; i++){
		fputs(identity1[i], fp1);
	}
	
	char* identity2[2] = {"#즐겨먹는 음식 : 짬뽕, 탕수육\n", 
						  "#취미 : 축구\n"};
	for(int i=0; i<2; i++){
		fputs(identity2[i], fp2);
	}

	fclose(fp1);
	fclose(fp2);
	// w/a스트림 close 이후 r스트림으로 무엇인가 해야함
	
	char str[10]; // 단순히 버퍼 크기
	
	while(fgets(str, sizeof(str), fp3)!=NULL){ // 버퍼 크기만큼 str에 복사후
		printf("%s", str); // str 출력
	} // 을 버퍼가 0개를 담을때까지 (텍스트가 끝날때까지) 반복한다 

	fclose(fp3);

}