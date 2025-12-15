#include <stdio.h>
typedef int Integer;
typedef float realNumber;

typedef struct Book
{
    char name[20];
    int pages;
    float price;
} book;

int main()
{
    Integer x = 5;
    realNumber y = 3.14;

    struct Book b1;
    book b2; // this is the use of typedef

    printf("%d\n", x);
    printf("%f\n", y);
    return 0;
}

// typedef oldname newName
