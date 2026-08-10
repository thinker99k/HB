#include <stdio.h>

struct employee
{
	char name[20];
	char rrn[20];
	int pay;
};

void trim(struct employee* p_man)
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
	struct employee man[3];
	int i;
	
	printf("----종업원 등록----\n");
	for(i=0; i<3; i++){
		printf("%d번째 사람의 이름을 입력하세요\n", i+1);
		fgets(man[i].name, sizeof(man[i].name)/sizeof(char), stdin);
		printf("%d번째 사람의 주민등록번호를 입력하세요\n", i+1);
		fgets(man[i].rrn, sizeof(man[i].rrn)/sizeof(char), stdin);
		printf("%d번째 사람의 급여를 입력하세요\n", i+1);
		scanf("%d", &man[i].pay);
		printf("\n");
		clearinputbuffer();
	}
	
	trim(man);
	
	for(i=0; i<3; i++){
		printf("%15s | %15s | %10d(원)\n", man[i].name, man[i].rrn, man[i].pay);
	}
	
}