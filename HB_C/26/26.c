#include <stdio.h>

#define add(x, y, z) ((x)+(y)+(z))
#define mul(x, y, z) ((x)*(y)*(z))

#define PI 3.14
#define AREA(x) ((x)*(x)*PI)

#define MAX(x, y) ( (x) > (y) ? (x) : (y) )

int main(void)
{
	printf("%d ", add(1, 2, 3));
	printf("%d \n", mul(1, 2, 3));
	
	printf("%f\n", AREA(5));

	printf("%d\n", MAX(10, 100));
}