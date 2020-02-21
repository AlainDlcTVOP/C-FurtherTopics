#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
/* the only time when you are returning an array is when the function
 itself creates a array and must define as static variable so its contents aren't lost when the adress returned */

void populate(int a[]);
void showArray(int *a); //  Made in memory dosent need to be returned
void sortArray(int *a);
int main()
{
    int numbers[SIZE];

    /* populate the array */
    populate(numbers);

    /* show the array*/
    puts("unsorted array");
    showArray(numbers);

    /*sort the array*/
    puts("sorted array");
    sortArray(numbers);
    showArray(numbers);

    return 0;
}
void populate(int *a)
{
    int x;

    srand((unsigned)time(NULL));
    for (x = 0; x < SIZE; x++)
        a[x] = rand() % 100 + 1;
}
void showArray(int *a)
{
    int x;
    for (x = 0; x < SIZE; x++)
        printf("%3d", a[x]);
    putchar('\n');
}
void sortArray(int *a)
{
    int inner, outer, temp;

    for (outer = 0; outer < SIZE; outer++)
        for (inner = outer + 1; inner < SIZE; inner++)
            if (a[outer] > a[inner])
            {
                temp = a[inner];
                a[outer] = a[inner];
                a[outer] = temp;
            }
}