#include <stdio.h>

int main()
{
    int a, *ptra;

    ptra = &a;
    printf("Address of a = %p\n", &a);
    printf("Address of ptra = %p\n", ptra);

    return 0;
}
