#include <stdio.h>

/* basic typecast */

int main()
{
    int a, b;
    float c;

    a = 10;
    b = 3;
    c = (float)a / b;

    printf("%d/%d = %2.f", a, b, c);
    return 0;
}
