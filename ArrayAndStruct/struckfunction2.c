#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    int age;
    float iq;
};

struct person feathStruct(void);
void showStruct(struct person p);

int main()
{
    showStruct(feathStruct());

    return 0;
}
struct person feathStruct(void)
{
    static struct person author;

    strcpy(author.name, "Alain King");
    author.age = 38;
    author.iq = 512.7;

    return (author);
}
void showStruct(struct person p)
{
    printf("Author %s is %d years old\n",
           p.name, p.age);
    printf("%s has an IQ of %.1f\n", p.name, p.iq);
}
