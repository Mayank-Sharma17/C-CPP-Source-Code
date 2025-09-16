#include <stdio.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    { // b is out of race
        if (a > c)
            printf("%d is greatest", a);
        else // a<c
            printf("%d is greatest", c);
    }
    else
    { // b>a -> a is out of race
        if (b > c)
            printf("%d is greatest", b);
        else // c>b
            printf("%d is greatest", c);
    }

    return 0;
}