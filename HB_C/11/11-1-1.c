#include <stdio.h>

int main(void)
{
    int arrange[5];
    int i;
    int max, min, sum=0;

    printf("배열[5]에 들어갈수 5개 입력\n");
    
    for( i = 0 ; i <= 4 ; i++ )
    {
        scanf("%d", &arrange[i]);
    }
    
    max = arrange[0], min = arrange[0];

    for( i = 0 ; i <= 4 ; i++ )
    {
        if(arrange[i]>max)
            max = arrange[i];
        if(arrange[i]<min)
            min = arrange[i];
        sum+=arrange[i];
    }

    printf("max is %d\nmin is %d\nsum is %d\n", max, min, sum);
}