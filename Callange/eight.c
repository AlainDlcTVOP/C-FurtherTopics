#include <stdio.h>
#include <stdlib.h>

/*Sort an array of struck 
Create the struct with day (string)
and temp float
Order the array by temp with coldest day first*/

#define SIZE 7
struct weather
{
    char day[10];
    float temp;
};
int check(const void *a, const void *b);
int main()
{

    struct weather week[SIZE] = {
        {"Sunday", 72.5},
        {"Monday", 68.4},
        {"Tuesday", 75.0},
        {"Wednesday", 73.8},
        {"Thursday", 65.1},
        {"Friday", 72.8},
        {"Saturday", 75.2}};

    int x;
    for (x = 0; x < SIZE; x++)
        printf("%.1f\n", week[x].temp);
    putchar('\n');

    /* sort the aray */

    qsort(week, SIZE, sizeof(float), check); // 1 base adress variabel numbers *ptn

    /* Display the sorted array */
    puts("Sorted array");
     for (x = 0; x < SIZE; x++)
        printf("%.1f\n", week[x].temp);
    putchar('\n');

    return 0;
}

int check(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}