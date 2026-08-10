#include <stdio.h>
/*
    break, continue 없이도 만들수 있다!

    int i = 2, j = 1;
    while(i <= 8){
        while(j <= i){
            printf("%d * %d = %d\n", i, j, i*j);
            j++;            
        }
    j = 1, i += 2;

    }
    int i, j;
    for ( i = 2 ; i <= 8 ; i += 2 ){
        for ( j = 1 ; j <= i ; j++ ){
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }

*/
/* 
핵심은 += 2를 사용하지 않는것임. 이걸 쓰면 continue 써먹을곳이 없음;
구구단 예제에 continue, break를 집어넣어보자.
*/
int main(void)
{
    int i, j;
    for(i=1; i<10; i++)
    {
        if(i%2==1)
        {
            continue; // 홀수일경우 아래 줄 실행 X
        }
        for(j=1; j<10; j++)
        {
            if(j>i)
            {
                break; // j 관련된 for문 탈출, 다시 i 관련된 for문 i++후 실행
            }
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }
}
