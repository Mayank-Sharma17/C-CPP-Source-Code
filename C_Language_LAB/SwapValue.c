// WAP to swap values of 2 integer variables 

#include<stdio.h>
int main() {

    int a, b, c;
    printf("Enter the number a and b : ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;
    
    printf("Swaped values are a = %d and b = %d", a, b);

    return 0;
}