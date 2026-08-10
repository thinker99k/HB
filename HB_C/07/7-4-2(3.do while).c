#include <stdio.h>

int main(void)
{
    int N;

    printf ("input N of N! :");
    scanf ("%d", &N);

    int i = 1, sum = 1;

    do
    {
        sum*=i;
        i++;
    } while (i<=N);
    printf ("%d! : %d\n", N, sum);
}