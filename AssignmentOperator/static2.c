#include <stdio.h>

char *repeat(char r);

int main()
{

    char c;

    printf("Type a character: \n");
    scanf("%c", &c);
    printf("%s\n", repeat(c));
    return 0;
}

char *repeat(char r)
{
    int x;
    static char string[32];

    for (x = 0; x < 32; x++)
    {
        string[x] = r;
    }

    return string;
}
