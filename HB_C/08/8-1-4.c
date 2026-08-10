#include <stdio.h>

int main(void)
{
    int i, j, result;
    printf("두개의 정수 입력\n");
    scanf("%d %d", &i, &j);
    result = (i >= j) ? (i - j) : (j - i);
    printf("큰수 - 작은수 = %d\n", result);
}