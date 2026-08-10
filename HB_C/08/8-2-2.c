#include <stdio.h>
/*
역시나 break, continue 활용하는 문제, A와 Z는 단순히 [0-9]중 하나에 증가연산자로 컨트롤
역순 증가 x, 그냥 (0,0), (0,1), ..., (9,8), (9,9)식으로 증가하는중에 걸리는거 출력하는식으로
*/
int main(void)
{
    int A, Z; //여기서 result 선언해주면 절대 안됨!!! A, Z는 쓰레기값

    for(A = 0; A <= 9; A++)
    {
        for(Z = 0; Z <= 9; Z++)
        {
            int result = (10*A+Z)+(10*Z+A); // 선언 while, for 안에서 가능 ㅇㅇ, 다만 이는 지금 Z관련 for문 안에서만 유효함
            if(result != 99) // result가 99가 아닐경우 아래 printf 안함, 일종의 필터 역할
                continue;
            printf("%d%d + %d%d = %d\nA=%d, Z=%d\n", A, Z, Z, A, result, A, Z);
        }
    }
}