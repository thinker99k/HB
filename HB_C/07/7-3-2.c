#include <stdio.h>

int main(void)
{
    int sum = 0, i = 0;
    do //[0-100]에서 실행
    {
        do //짝수일때만 실행
        {
            sum += i;
            i++;
        } while (i%2 != 1); //i를 2로 나눴을때 나머지가 1이 아니면 (짝수면) 실행
        i++;
    } while (i<=100); // i가 100까지 do while 실행, 
    printf("sum of even number [1-100] : %d\n", sum);
}
//존나 잘했다!! 교제 답안은 그냥 i를 2씩 더하는거임 ㅋㅋ