#include <stdio.h>
#include <string.h>

/* Promt the user to type some text
Sort the input as a character array A to Z
Display the Sorted string */

#define SIZE 100

int main()
{
    char str[SIZE];
    int length, inner, outer, temp;
    puts("type some text");

    fgets(str, SIZE, stdin);

    length = strlen(str);

    for (outer = 0; outer < length; outer++)
        for (inner = outer + 1; inner < length; inner++)

            if (str[inner] > str[outer])
            {
                temp = str[inner];
                str[inner] = str[outer];
                str[outer] = temp;
            }

    puts("Sorted String");
    printf("%s", str);

    return 0;
}
