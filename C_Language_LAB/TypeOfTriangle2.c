// On the basis of angle types of triangle

#include<stdio.h>
int main() {

    int a,b,c, largerSide;
    printf("Please enter the sides a, b, c of the triangle\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Determine the largest side
        if (a >= b && a >= c)
            largerSide = a;
        else if (b >= a && b >= c)
            largerSide = b;
        else
            largerSide = c;
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    if(a*a + b*b == largerSide*largerSide) {
        printf("Right angle triangle\n");
    } else if(a*a + b*b > largerSide*largerSide) {
        printf("Acute angle triangle\n");
    } else {
        printf("Obtuse angle triangle\n");
    }
    return 0;
}