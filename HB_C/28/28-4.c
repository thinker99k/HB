#include <stdio.h>

int wordcnt(FILE* fptr)
{
	int cnt = 0;
	
	char wordarr[50];
	
	while(!feof(fptr)){
		fscanf(fptr, "%s", wordarr);
		
		if(wordarr[0]==65 || wordarr[0]==97)
			++cnt;
		else if(wordarr[0]==80 || wordarr[0]==112)
			++cnt;
	}
	printf("a와 p로 시작하는 단어는 %d개\n", cnt);

	return cnt;
}


int main(void)
{
	FILE* fptr = fopen("28-4wordcnt.txt", "rt");
	
	int cnt = wordcnt(fptr);
	
	printf("a와 p로 시작하는 단어는 %d개\n", cnt);
	
	fclose(fptr);
	
	return 0;
}