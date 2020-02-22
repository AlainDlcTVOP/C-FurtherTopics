#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Code a least two fucktions, one to fill a struckture
 with data and another to display the structure data*/

struct person
{
    char name[32];
    int age;
};
struct person *allocateStruct(void);
void fillstructure(struct person *p);
void showStruct(struct person *p);

int main(int argc, char const *argv[])
{

    struct person *c;

    c = allocateStruct();

    fillstructure(c);
    showStruct(c);
    return 0;
}

struct person *allocateStruct(void)
{
    struct person *p;

    p = (struct person *)malloc(sizeof(struct person));
    if (p == NULL)
    {
        perror("Unable to allocate structure");
        exit(1);
    }
}
void fillstructure(struct person *p)
{
    printf("Type your name\n");
    scanf("%s", p->name);
    printf("enter you age\n");
    scanf("%d", &p->age);
}
void showStruct(struct person *p)
{
    printf("%s is %d years old\n", p->name, p->age);
}
