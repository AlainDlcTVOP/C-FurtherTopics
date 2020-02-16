#include <stdio.h>
#include <stdint.h>

/* Use the ternary operator
Fetch a positive integer greater than zero
Report whether that input is odd or even */

int main()
{
    uint8_t a;

    char *value;

    puts("Enter a number");
    scanf("%d", &a);

   
    if (a < 1)
    {
        return 1;
    }

    value = (a % 2) ? "odd" : "even";

    printf("%d is = %s",a, value);

    return 0;
}
