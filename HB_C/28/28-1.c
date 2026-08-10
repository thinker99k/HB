#include <stdio.h>
#include <string.h>

typedef struct
{
	char author[41];
	char title[81];
	int page;
} Boox;

void nolf(char* ptr)
{
	ptr[strlen(ptr)-1] = 0;
}

int main(void)
{
	Boox library[3];
	
	printf("도서정보 입력\n");
	for(int i=0; i<3; i++){
		printf("\n책 (%d/3)\n", i+1);
		
		printf("제목: ");
		fgets(library[i].title, sizeof(library[i].title), stdin);
		nolf(library[i].title);
		
		printf("저자: ");
		fgets(library[i].author, sizeof(library[i].author), stdin);
		nolf(library[i].author);
		
		printf("페이지 수: ");
		scanf("%d", &library[i].page);
		getchar();
	}
		
	printf("---------------------------------------\n             도서정보 출력\n---------------------------------------");
	for(int i=0; i<3; i++){
		printf("\n책의 정보(%d/3)\n", i+1);
		printf("제목: ");
		puts(library[i].title);
		printf("저자: ");
		puts(library[i].author);
		printf("페이지 수: ");
		printf("%d\n", library[i].page);
	}
}