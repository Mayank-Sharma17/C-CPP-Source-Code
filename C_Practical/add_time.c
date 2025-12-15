#include <stdio.h>
#include <stdlib.h>

typedef struct Time
{
    int hh;
    int mm;
    int ss;
} time;
time *add(time *time1, time *time2)
{
    time *t = (time *)malloc(sizeof(time));

    t->hh = time1->hh + time2->hh; // t->hh value milege
    t->mm = time1->mm + time2->mm;
    t->ss = time1->ss + time2->ss;

    // Normalize seconds
    if (t->ss >= 60)
    {
        t->mm += t->ss / 60;
        t->ss = t->ss % 60;
    }

    // Normalize minutes
    if (t->mm >= 60)
    {
        t->hh += t->mm / 60;
        t->mm = t->mm % 60;
    }
    // Normalize hours (24-hour format)
    t->hh = t->hh % 24;

    return t; // return pointer
}
int main()
{
    // time t1; allocate memory dynamically
    // time t2;

    time *ptr1 = (time *)malloc(sizeof(time));
    time *ptr2 = (time *)malloc(sizeof(time));

    printf("Enter time 1----------\n");
    printf("Enter the hh : ");
    scanf("%d", &ptr1->hh);
    printf("Enter the mm : ");
    scanf("%d", &ptr1->mm);
    printf("Enter the ss : ");
    scanf("%d", &ptr1->ss);

    printf("Enter time 2----------\n");
    printf("Enter the hh : ");
    scanf("%d", &ptr2->hh);
    printf("Enter the mm : ");
    scanf("%d", &ptr2->mm);
    printf("Enter the ss : ");
    scanf("%d", &ptr2->ss);

    time *ttime = add(ptr1, ptr2);

    printf("%d : %d : %d", ttime->hh, ttime->mm, ttime->ss);

    return 0;
}