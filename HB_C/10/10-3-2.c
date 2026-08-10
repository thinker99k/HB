#include <stdio.h>

int EucAlg(int x, int y) // x>y 된 상태로 입력받음
{
    int z;
	while(y>0)
	{
		z = x % y;
		x = y;
		y = z; // 여기까지 되고 while문 탈출 조건 걸려서 나옴
	}
    return x;
}
/*
유클리드 호제법
x       y       %
1071    1029    42
        <<<<<<<<<<<<
1029    42      21
        <<<<<<<<<<<<
42      21      0
        <<<<<<<<<<<<
21      0
*/
int main(void)
{
    int a, b, result;

    printf("최대공약수를 구할 두 수를 입력\n");
    scanf("%d %d", &a, &b);
    
    if(a>b)
        printf("%d와 %d의 최대공약수는 %d", a, b, EucAlg(a, b));
    else
        printf("%d와 %d의 최대공약수는 %d", b, a, EucAlg(b, a));
}