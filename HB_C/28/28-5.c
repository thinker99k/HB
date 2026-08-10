#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* d1 = fopen("28-5d1.txt", "rt");
	FILE* d2 = fopen("28-5d2.txt", "rt");
	
	char buf1[20];
	char buf2[20];
	
	int flag = 1;
		
	while(1){
		if(feof(d1)!=0 || feof(d2)!=0)
			break;
		
		fgets(buf1, sizeof(char)*20, d1);
		fgets(buf2, sizeof(char)*20, d2);
		
		if(strcmp(buf1, buf2)!=0)
			flag = 2;
	}
	
	if(flag==1)
		printf("두 파일은 일치!\n");
	else
		printf("두 파일은 불일치!\n");
	
	fclose(d1);
	fclose(d2);
	
	return 0;
	
}