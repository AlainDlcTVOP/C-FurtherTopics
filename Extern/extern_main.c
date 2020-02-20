#include <stdio.h>
#include "extern_manipulate.c"


int data[5] = {2, 3, 4, 5, 7};

int main(int argc, char const *argv[])
{
    displayData();
    manipulateData();
    displayData();
    return 0;
}
