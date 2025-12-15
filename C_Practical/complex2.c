#include <stdio.h>
struct complex2
{
    int *real;
    int *img;
};

int main()
{

    struct complex2 c1;
    printf("Enter the real part : ");
    scanf("%d", c1.real);
    printf("Enter the img part : ");
    scanf("%d", c1.img);

    struct complex2 c2;
    printf("Enter the real part : ");
    scanf("%d", c2.real);
    printf("Enter the img part : ");
    scanf("%d", c2.img);

    return 0;
}