#include <stdio.h>

int main(void)
{
    int i, j;
    
    printf ("input start (start < end) : ");
    scanf ("%d", &i);
    printf ("input end (end > start) : ");
    scanf ("%d", &j);
    
    int i2 = i;
    int sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i<=j);
    
    printf ("sum of [%d-%d] : %d\n", i2, j, sum);
}