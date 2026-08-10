#include <stdio.h>

int main(void)
{
    int N;

    printf ("input N of N! : ");
    scanf ("%d", &N);

    int i = 1, sum = 1;
    while (i<=N)
    {
        sum*=i;
        i++;
    }
    printf ("%d! : %d\n", N, sum);
}