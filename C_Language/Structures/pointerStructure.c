#include <stdio.h>
// use of typedef user defined datatype used to create alias of the existing datatype

typedef struct pointerStructure
{
    char name[20];
    int roll;
    int cgpa;
} ptrstr;

int main()
{

    // struct pointerStructure s1 = {"mayank", 39, 9};
    ptrstr s1 = {"mayank", 39, 9};

    printf("%s\n", s1.name);
    printf("%d\n", s1.roll);
    printf("%d\n\n", s1.cgpa);

    // using pointer int* ptr = &a
    struct pointerStructure *ptr = &s1; // this will point the our s1

    // (*ptr).name ARROW OPERATOR ptr->name

    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).roll);
    printf("%d\n\n", (*ptr).cgpa);

    printf("%s\n", ptr->name);
    printf("%d\n", ptr->roll);
    printf("%d\n", ptr->cgpa);

    return 0;
}