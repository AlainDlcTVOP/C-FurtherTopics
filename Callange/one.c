#include <stdio.h>
#include <stdint.h>

/* Fetch a value from input and modify it
Multiply it by 5 and display the result
Divide the result with 3 and displaythat result */

int main()
{
    uint8_t a;

    puts("Enter a number to see magic!");
    scanf("%d", &a);
    printf("You entered %d\n");
    a *= 5;
    printf("5 * = %d\n", a);
    a /= 3;
    printf("3 / = %d\n", a);

   
    return 0;
}
