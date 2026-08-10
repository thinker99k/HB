#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((int)time(NULL));

	// 플레이어가 승리, 패배, 비김
	int arr[3] = {0,0,0};
	char* casearr[3]={"가위", "바위", "보"};
	char* resultarr[3]={"이겼습니다!", "졌습니다!", "비겼습니다!"};
	
	while(1){
		int cpu = (rand()%3)+1; // 1, 2, 3
		
		int input;
		
		printf("1:가위, 2:바위, 3:보\n(0 to exit) : ");
		scanf("%d", &input);
		
		if(input==0)
			break;
		else if(input>3 || input<0){
			printf("다시 선택해주세요\n");
			continue;
		}
		
		char* result;
		
		// 승리, 패배, 비김
		if((input == 1 && cpu == 3) || (input == 2 && cpu == 1) || (input == 3 && cpu == 2)){
			result = resultarr[0];
			++arr[0];
		}
		else if((input == 1 && cpu == 2) || (input == 2 && cpu == 3) || (input == 3 && cpu == 1)){
			result = resultarr[1];
			++arr[1];
		}
		else{ // input == cpu
			result = resultarr[2];
			++arr[2];
		}
		
		printf("당신은 %s 선택, 컴퓨터는 %s선택, %s\n", casearr[input-1], casearr[cpu-1], result);
	}
	printf("승리 : %d회, 패배 : %d회, 무승부 : %d회\n", arr[0], arr[1], arr[2]);

}