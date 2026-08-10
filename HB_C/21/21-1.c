#include <stdio.h>

/* 존 나 중 요*/
void clearinputbuffer(void)
{
	while(getchar()!='\n'){};
}
/* 
getchar은 \n까지 문자열로 받음
while(1)에 알파벳이 아닌 문자를 입력할경우
입력버퍼에 (문자),\n(개행) 둘이 남음
abccheck이 문자 하나만 받기에, (문자) 들어가고도 아직 입력버퍼에 \n 남아있음
if문 조건 불만족, 다시 while(1) 들어감
남아있는 입력버퍼 \n 역시나 if문 조건 불만족, 다시 while문 들어감
이래서 경고메세지 두번씩 출력됨

clearinputbuffer함수 설명
getchar()가 \n이 아닐때 : 아무것도 하지 말아라
\n을 입력받으면
1. 일단 입력버퍼에 있는 \n을 clearinputbuffer함수가 읽으면서 입력버퍼에서 사라진다
(\n은 그 자체로 입력기능도 있기에 바로 투입됨)
2. 함수의 실행조건 불만족, while문 탈출
=> 단순히 함수내에서 입력버퍼내의 \n이 읽혀지기만 하고 소모되는것이다
*/

int abccheck(int x)
{
	int result = ((x>64 && x<91) || (x>96 && x<123));
	
	return result;
}

int caseconv(int x) // 알파벳을 받음이 보장되기에 아래 if문 범위 뭉텅이로 쳐낼수있음
{
	if(x<93)
		return x+=32;
	else
		return x-=32;
}


int main(void)
{
	int input;
	
	while(1){
		input = getchar(); // \n 무시 안됨;;
		
		if(abccheck(input) == 1){
			break;
		}
		else{
			printf("알파벳을 입력하세요!\n");
		}
		clearinputbuffer(); // ****\n 지워줌****
		
	}
	
	input = caseconv(input);
	
	putchar(input);
	printf("\n");
	
}