#include <stdio.h>
#include <stdlib.h>

/* Promt the user to input an integer
   Store the value input
   Display the integer as a floating point
   value using the format n.n (one digit after the decimal)*/

int main()
{
    int a;
   
    printf("Enter a integer : \n");
  
    scanf("%d", &a);

   
   
    

    printf("You typed %.1f\n", (float)a);

    return 0;
}
