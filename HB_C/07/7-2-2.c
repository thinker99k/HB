#include <stdio.h>
// 내 힘으로 푼 문제 아님, 알고리즘 파악은 제대로 하잔
int main(void)
{
    int i = 0;
    int j = 0;
    while (i<5) // W1, i = 5일때 stop
    {
        while (j<i) // W2, j = i일때 stop
        {
            printf ("o "); // P1
            j++;
        }
    printf ("* \n"); // P2
    i++;
    j = 0;
    }
}
/*
**알고리즘**
    W1 : i = 0
        W2 : j = 0 = i -> 불만족 -> break
    P2, j = 0, i = 1

    W1 : i = 1
        W2 : j = 0 < i = 1 -> 만족 -> continue
        P1, j = 1
        W2 : j = 1 = i -> 불만족 -> brak
    P2, j = 0, i = 2

    W1 : i = 2
        W2 : j = 0 < i = 2 -> 만족 -> continue
        P1, j = 1
        W2 : j = 1 < i = 2 -> 만족 -> continue
        P1, j = 2
        W2 : j = 2 = i -> 불만족 -> break
    P2, j = 0, i = 3

    W1 : i = 3
        W2 : j = 0 < i = 3 -> 만족 -> contiune
        P1, j = 1
        W2 : j = 1 < i = 3 -> 만족 -> contiune
        P1, j = 1
        W2 : j = 2 < i = 3 -> 만족 -> contiune
        P1, j = 1
        W2 : j = 3 = i -> 불만족 -> break
    P2, j = 0, i = 4

    W1 : i = 4
        W2 : j = 0 < i = 4 -> 만족 -> contiune
        P1, j = 1
        W2 : j = 1 < i = 4 -> 만족 -> contiune
        P1, j = 1
        W2 : j = 2 < i = 4 -> 만족 -> contiune
        P1, j = 1
        W2 : j = 3 < i = 4 -> 만족 -> contiune
        P1, j = 1
        W2 : j = 4 = i -> 불만족 -> break
    P2, j = 0, i = 5

    W1 : i = 5 -> 불만족 -> break
*/