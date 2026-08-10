#include <stdio.h>

int main(void)
{
    int i, j;

    printf("두개의 정수 입력\n");
    scanf("%d %d", &i, &j);
    
    if(i>=j)
        printf("큰수 - 작은수 = %d\n", i=j);
    else
        printf("큰수 - 작은수 = %d\n", j-i);
}