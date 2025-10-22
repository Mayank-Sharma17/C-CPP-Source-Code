#include <stdio.h>
int main()
{

    // This work in C/C++ not in java

    // if(condtion) agar condition and expression true toh ander wala code chal jata hai
    //     statement;
    // if(expression)
    //     statement;

    int a;
    if (3 + 2 % 5) // value of exp = 5... agar koe bhe int dedu like 5 -5 toh vo true hota hai except 0, kuch ho ander toh voh true hai
        printf("This work\n");

    if (a = 10) // if(10)
        printf("Even this works\n");

    if (-5) // any number except 0 toh voh true hota h
        printf("Surprisingly even this works\n");

    if ('a') // any character expect 0 will work
        printf("HELLO");
    return 0;
}