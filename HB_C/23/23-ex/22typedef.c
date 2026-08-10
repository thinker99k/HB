#include <stdio.h>

typedef struct // employee 생략 가능
{
	char name[20];
	char rrn[20];
	int pay;
} EMPLOYEE; // 구조체의 이름은 따로 안짓겠는데, 이렇게 구성된 구조체를 EMPLOYEE라고 하자~

void trim(EMPLOYEE* p_man)
{
	for(int i=0; i<3; i++){
		for(int j=0; j<20; j++){
			if(p_man[i].name[j] == 10)
				p_man[i].name[j] = 0;
			if(p_man[i].rrn[j] == 10)
				p_man[i].rrn[j] = 0;
		}
	}
}

void clearinputbuffer(void)
{
	while(getchar()!='\n'){};
}

int main(void)
{
	EMPLOYEE man[3];
	int i;
	
	EMPLOYEE (*ptrman)[3] = &man; 
	/*
	man은 2차원 배열(비슷한 무언가)
	
	man[0]			man[1]			man[2]
	------------	------------	------------
	man[0].name		man[1].name		man[2].name
	man[0].rrn		man[1].rrn		man[2].rrn
	man[0].pay		man[1].pay		man[2].pay
	
	열 먼저 접근, 그다음 행(맴버) 접근, 맴버간 순서는 작성순서순
	따라서 포인터 선언시에 18-1-1.c와 비슷한 방식으로 포인터 선언해줘야함
	*/
	
	printf("----종업원 등록----\n\n");
	for(i=0; i<3; i++){
		printf("%d번째 사람의 이름을 입력하세요\n", i+1);
		fgets((*ptrman+i)->name, sizeof((*ptrman+i)->name)/sizeof(char), stdin);
		printf("%d번째 사람의 주민등록번호를 입력하세요\n", i+1);
		fgets((*ptrman+i)->rrn, sizeof((*ptrman+i)->rrn)/sizeof(char), stdin);
		printf("%d번째 사람의 급여를 입력하세요\n", i+1);
		scanf("%d", &(*ptrman+i)->pay);
		printf("\n");
		clearinputbuffer();
	}
	
	trim(man); // decay
	
	for(int i=0; i<3; i++)
	{
		(*ptrman+i)->pay += 10000000;
	}
	
	for(i=0; i<3; i++){
		printf("%15s | %15s | %10d(원)\n", (*ptrman+i)->name, (*ptrman+i)->rrn, (*ptrman+i)->pay);
	}
	
}