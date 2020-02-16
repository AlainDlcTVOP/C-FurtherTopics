#include <stdio.h>
#include <stdint.h>

/* Basic ternary*/
int main()
{
    uint8_t age;
    char *classification;

    printf("Enter your age\n");
    scanf("%d", &age);

    classification = ((age < 19) ? "Kid" : (age > 65 ? "adult" : "geezer"));

    printf("You are %s \n", classification);
    return 0;
}
