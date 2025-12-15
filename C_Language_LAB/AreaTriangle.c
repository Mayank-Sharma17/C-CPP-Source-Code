// Write a program to find the area of a Triangle
// Area of triangle if all sides given = Root(s(s-a)(s-b)(s-c))

#include<stdio.h>
#include<Math.h>
void main() {
    int a, b, c;
    float area, s;
    
    printf("Enter the sides a, b, c of the triangle\n");
    scanf("%d %d %d", &a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of the triangle is = %f", area);
}