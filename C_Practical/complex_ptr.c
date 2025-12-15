#include <stdio.h>
#include <stdlib.h> // dma
struct complex
{
    float real;
    float img;
};

struct complex *add(struct complex *p1, struct complex *p2)
{
    struct complex *s = (struct complex *)malloc(sizeof(struct complex));
    s->real = p1->real + p2->real;
    s->img = p1->img + p2->img;

    return s; // returning pointer
}

int main()
{
    struct complex *ptr1;
    struct complex *ptr2;

    ptr1 = (struct complex *)malloc(sizeof(struct complex));
    ptr2 = (struct complex *)malloc(sizeof(struct complex));

    printf("Enter the real and img values of s1 : \n");
    printf("real part of s1 : ");
    scanf("%f", &ptr1->real);
    printf("img part of s1 : ");
    scanf("%f", &ptr1->img);

    printf("Enter the real and img values of s2 : \n");
    printf("real part of s2 : ");
    scanf("%f", &ptr2->real);
    printf("img part of s2 : ");
    scanf("%f", &ptr2->img);

    struct complex *sum = add(ptr1, ptr2);
    printf("The sum of two complex number s1 and s2 is : %.2f + %.2fi", sum->real, sum->img);

    // free(ptr1) free(ptr2)
    return 0;
}
