#include<stdio.h>
int main() {
    
    // If sides of a triangle is given then determine the type of a triangle and check if it's a triangle or not
    int a, b, c;
    printf("Please enter the sides a, b, c of the triangle\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a+b>c && b+c>a && c+a>b) {
        printf("It is a triangle...\n");

        if(a==b && b==c && c==a) {
            printf("It's a equilateral triangle");
        } else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b)) {
            printf("It's a iscoceles triangle");
        } else if ((a*a+b*b) == c*c || (b*b+c*c) == a*a || (c*c+a*a) == b*b) {
            if(a!=b || b!=c || c!=a) {
                printf("It's both right angle triangle and scalene triangle because it's a pythagorean triplet with all sides unequal"); 
            } else {
                printf("It's a isoceles right angle triangle of form (a,a,some irrational term)");
            }   
        } else {
            printf("It's a scalene triangle");
        }

    } else {
        printf("It's not a triangle");
    }

    return 0;
}