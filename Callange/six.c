#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Promt the user to input text
Send the text to a function
In the function, convert all letters to
uppercase and all spaces 
to underline */

void convert(char *s);

int main(int argc, char const *argv[])
{
    char str[1000];
    printf("Input some text\n");
    fgets(str, 1000, stdin);
    convert(str);
    printf("%s", str);

    return 0;
}

void convert(char *s)
{

    while (*s)
    {
        *s = toupper(*s);
        if (*s == ' ')
            *s = '_';
        s++;
    }
}
