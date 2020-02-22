#include <stdio.h>

int main()
{
    int a[10], *ptra;

    ptra = &a[3];

    printf("Address of a = %p\n", a);
    printf("Address of a = %p\n", &a[2]);
    printf("Pointer of ptra = %p\n", ptra);
    return 0;
}
