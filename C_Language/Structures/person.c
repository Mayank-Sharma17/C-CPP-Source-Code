#include <stdio.h>

typedef struct Person
{
    int age;
    float weight;
} person;

int main()
{
    person p;
    person *ptr = &p;

    ptr->age = 17;
    ptr->weight = 55;

    printf("%d\n", ptr->age);
    printf("%f", ptr->weight);

    return 0;
}