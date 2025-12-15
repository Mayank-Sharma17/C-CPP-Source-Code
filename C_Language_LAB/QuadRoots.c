// Write a program to find the roots of the quadratic equation

#include<stdio.h>
#include<math.h>
void main() {
    int a, b, c;
    float r1, r2, D;

    printf("Please enter the coefficient of the quadratic equation\n");
    scanf("%d %d %d", &a, &b, &c);

    D = sqrt((b*b) - (4*a*c));
    r1 = (-b+D)/(2*a);
    r2 = (-b-D)/(2*a);

    printf("The roots of the quadratic equation is %f and %f\n", r1, r2);
}