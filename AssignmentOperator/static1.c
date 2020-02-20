#include <stdio.h>

void f(void);

int main()
{

    f();
    f();
    return 0;
}

void f(void)
{
   static int x = 0;

    printf("Value of x is %d\n", x);
    x++;
    printf("Value of x is %d\n", x);
}
