#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void findborderANDend(int num, char (*p_str)[50], int (*p_len)[2])
{
	for(int i=0; i<2; i++){
		for(int j=0; j<num; j++){
			if(p_str[i][j]==32){
				p_len[i][0] = j; // ascii 32의 위치
			}
			if(p_str[i][j]==0){
				p_len[i][1] = j; // ascii 0의 위치
				break;
			} // 이 왼쪽에는 ascii 10이 있음
		}
	}
}

void JFIP
(char (*p_str)[50], char (*p_name)[40], char (*p_age)[10], int (*p_len)[2])
{
	for(int i=0; i<2; i++){
		strncpy(p_name[i], p_str[i], p_len[i][0]);
		strncpy(p_age[i], &p_str[i][p_len[i][0]+1], (p_len[i][1]-p_len[i][0])-2);
	}
}

int compare(int num, char(*p_char)[num])
{
	return strcmp(p_char[0], p_char[1]); // 같을경우 0반환, 다를경우 0이 아닌값 반환
}

int main(void)
{
	char str[2][50] = {0,};
	
	char name[2][40] = {0,};
	char age[2][10] = {0,};
	
	int len[2][2] = {0,};
	
	for(int i=0; i<2; i++){
		printf("사람%d 이름(한칸띄고)나이 입력\n", i+1);
		fgets(str[i], sizeof(str[i]), stdin);
	}

	findborderANDend(sizeof(str)/2, str, len);
	JFIP(str, name, age, len);

	char* word[2][2] = {
		{"이름이", "나이가"},
		{"같습니다!\n", "다릅니다!\n"}
	};
	
	if(compare(sizeof(name)/2, name)==0)
		printf("%s %s", word[0][0], word[1][0]);
	else
		printf("%s %s", word[0][0], word[1][1]);
	
	if(compare(sizeof(age)/2, age)==0)
		printf("%s %s", word[0][1], word[1][0]);
	else
		printf("%s %s", word[0][1], word[1][1]);
}