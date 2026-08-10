#include <stdio.h>

int main(void)
{
    int sum = 0;
    int num;

    printf("input number (0 to quit) :\n");
    scanf("%d", &num);
    sum += num; // num 1번 입력받음

    while (num != 0)
    {
        printf("input number (0 to quit) \n");
        scanf("%d", &num);
        sum += num;
    }
    printf("sum is %d\n", sum); // num이 0이되면, 0을 더하고 while문 탈출
}