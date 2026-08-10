#include <stdio.h>

int main(void)
{
    int N;

    printf ("input N of N! :");
    scanf ("%d", &N);

    int i = 1, sum;
    for (sum = 1; i<=N; i++)
    {
        sum*=i;
    }
    printf ("%d! : %d\n", N, sum);
}