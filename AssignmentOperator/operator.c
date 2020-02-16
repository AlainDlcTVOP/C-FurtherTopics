#include <stdio.h>
#include <stdint.h>

/* Operator + - * / */
int main()

{

    int value = 20;

    /*add*/

    value += value;
    printf("Addition = %d\n", value);

    /*substraaction*/

    value -= 5;

    printf("Substraction = %d\n", value);

    /*multiplie*/

    value *= 5;
    printf("Multiplie = %d\n", value);

    /*division*/

    value /= 2;
    printf("Division = %d\n", value);
    return 0;
}
