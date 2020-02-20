#include <stdio.h>

/*Write a function that returns an int array
Have the array hold the values 2,3,5,7,11
Display the value in main function */

int *array();

int main()
{

    array();
    return 0;
}

int *array()
{
    static int x[5] = {2, 3, 5, 7, 11};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", x[i]);
    }

    return x;
}
