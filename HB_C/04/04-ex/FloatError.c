#include <stdio.h>

int main(void)
{
    int i;
    float num=0.0;

    for(i=0; i<100; i++)
        num+=0.1;
    /*
    about this for statement
    1. i = 0 declaration
    2. when i < 100
    3. num + 0.1 : num = 0.1
    4. i++ : after do num+=0.1, do i = i+1
    5. i = 2
    6. i < 100
    7. num + 0.1 : num = 0.2
    8. i + 1
    ...
       i = 99
       still i < 100
       num + 0.1 : num =/= 10
       i + 1
     **i = 100**
       i </ 100
       break
    */
    printf("%f", num);
}
// result = 10.000002