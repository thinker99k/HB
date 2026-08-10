#include <stdio.h>

int main(void)
{
    int Ax, Ay;
    scanf ("%d %d", &Ax, &Ay);
    int Bx, By;
    scanf ("%d %d", &Bx, &By);
    int X = (Bx-Ax);
    int Y = (By-Ay);
    printf ("%d", X*Y);
}