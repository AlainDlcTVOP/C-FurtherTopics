#include <stdio.h>

int x;

void f(void);

int main()
{
    x = 0;

    printf("In the main() function x = %d\n", x);

     printf("In the main2() function x = %d\n", x);

    f();

    printf("In the main() function x = %d\n", x); //it will cointains the same value after calling the fucktion

      printf("In the main2() function x = %d\n", x); //it will cointains the same value after calling the fucktion
    return 0;
}
void f(void)
{
    x = -1;
    printf("In function f() x = %d\n", x);
}