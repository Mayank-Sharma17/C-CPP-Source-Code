#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a, b;
    printf("Enter the numbers a and b : ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("Now after swaping a = %d and b = %d", a, b);

    return 0;
}