#include <stdio.h>
// 거듭제곱은 math.h 사용하면 구할수 있으나, 연습을 위해 재귀함수로 할것임

// 못풀었다. *= 사용!!!!!

int main(void)
{
    int n, i, k = 0; // n은 입력값(for문 종점),

    printf("2^k <= n\n가장 큰 k를 구하기 위해 1이상의 정수 n 입력 : ");
    scanf("%d", &n);
    
    if(n==1) //n이 1이면 그냥 0
        printf("k는 0");

    for( i = 1 ; i <= n ; i++ )
    {
        i *= 2;
        k++; // for 사이클 돌때마다 k++;
    }
    printf("k는 %d", k);

}