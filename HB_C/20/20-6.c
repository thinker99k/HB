#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void uservalid(int* ptr){
	if((ptr[0]==ptr[1]) || (ptr[1]==ptr[2]) || (ptr[2]==ptr[0])){
		printf("세 숫자를 다르게 입력하세요!\n\n");	
	}
}

int main(void)
{
	srand((int)time(NULL));
	
	int cpu[3] = {0,0,0};
	
	while(1){
		if((cpu[0]!=cpu[1]) && (cpu[1]!=cpu[2]) && (cpu[2]!=cpu[0])){
			break;
		}
		for(int i=0; i<3; i++){
			cpu[i] = rand()%10;
		}
	}
	
	printf("cpu : %d%d%d\n", cpu[0], cpu[1], cpu[2]); // 실제 작동시 주석처리
	
	printf("Start Game!\n\n");
	int try = 0;

	while(1){
		int user[3] = {0,0,0};
		int strike = 0, ball = 0;
		
		while(1){
			if((user[0]!=user[1]) && (user[1]!=user[2]) && (user[2]!=user[0]))
				break;
			printf("서로 다른 수 3개 입력 : ");
			scanf("%d %d %d", &user[0], &user[1], &user[2]);
			uservalid(user);
		}
		
		printf("user : %d%d%d\n", user[0], user[1], user[2]); // 실제 작동시 주석처리

		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				if(user[i]==cpu[j]){
					if(i==j)
						++strike;
					else
						++ball;
				}
			}
		}
		
		printf("%d번째 도전 결과 : %d strike, %d ball\n\n", ++try, strike, ball);
		
		if(strike==3)
			break;
		}
	
	printf("%d번만에 승리!\nGame Over!\n", try);
}