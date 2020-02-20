#include <stdio.h>
#include <math.h>


/* Convertion from -negative */
int main()
{
    int a;
    float aroot;

    printf("Type an integer: \n");
    scanf("%d", &a);
    printf("You typed %d integer: \n",a);
    aroot = sqrt(abs(a));

    printf("Print qcuare root of %d is %0.4f\n", a, aroot);
    return 0;
}
