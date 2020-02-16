#include <stdio.h>



/* Basic ternary*/

int main()
{
    int a, b, larger;

    printf("Enter a value :\n");
    scanf("%d", &a);
    printf("Enter another value :\n");
    scanf("%d", &b);

    larger = (a > b) ? a : b;
    

    printf("%d is the larger value\n",larger);

    return 0;
}
