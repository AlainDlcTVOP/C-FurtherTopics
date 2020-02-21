#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int compare(const void *a, const void *b);
int main()
{
    int numbers[SIZE];
    int x;

    /* populate the array */
    srand((unsigned)time(NULL));
    for (x = 0; x < SIZE; x++)
        numbers[x] = rand() % 100 + 1;

    /*Display the unsorted array */
    for (x = 0; x < SIZE; x++)
        printf("%3d", numbers[x]);
    putchar('\n');

    /* sort the aray */

    qsort(numbers, SIZE, sizeof(int), compare); // 1 base adress variabel numbers *ptn 

    /* Display the sorted array */
    puts("Sorted array");
    for (x = 0; x < SIZE; x++)
        printf("%3d", numbers[x]);
    putchar('\n');

    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
