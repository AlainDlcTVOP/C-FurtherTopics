#include <stdio.h>

/* Setting up a extranal variable */

void f(void);
int main()
{
    int x = 0;
    printf("In main function x = %d\n", x);

    f();

    printf("In  function f() x = %d\n", x);

    return 0;
}

void f(void)
{
    int x = -1;
     

    printf("IN function f() x = %d  \n", x);
}
