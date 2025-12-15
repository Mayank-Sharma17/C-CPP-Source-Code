#include <stdio.h>

struct Time
{
    int h, m, s;
};

int main()
{
    struct Time t1, t2, sum;

    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);

    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

    sum.s = t1.s + t2.s;
    sum.m = t1.m + t2.m + (sum.s / 60);
    sum.h = t1.h + t2.h + (sum.m / 60);

    sum.s = sum.s % 60;
    sum.m = sum.m % 60;

    printf("Sum of time = %02d:%02d:%02d\n", sum.h, sum.m, sum.s);

    return 0;
}