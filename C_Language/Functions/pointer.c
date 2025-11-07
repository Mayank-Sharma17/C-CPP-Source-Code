#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a; // int* -> interger ka address store karta hai

    *x = 7; // a var ka address pr jo value hai use change krskte hai pointers ke help se (a is changed)

    int **y = &x; // double pointer int** -> int* pointer ka address store karta hai
    int ***z = &y;

    printf("%p\n", x);
    printf("%p\n", &x);
    printf("%d\n", *x); // x ke ander 'a' variable ke address pr jo value hai usko print krega (jis add ko vo point kr karaha hai variable ke value of print krega)

    printf("%d\n", **y);
    printf("%d", ***z);
    return 0;
}