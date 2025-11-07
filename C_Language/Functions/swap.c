#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the numbers a and b : ");
    scanf("%d %d", &a, &b);

    int temp; // using temp variable
    temp = a;
    a = b;
    b = temp;

    // int a = -5, b = 10; using maths
    // a = a + b = 5
    // b = a - b = -5
    // a = a - b = 10

    // int a = -5, b = 10; using XOR operator
    // a = a * b; // a = -50
    // b = a / b; // b = -5
    // a = a / b; // a = 10

    printf("Now after swaping a = %d and b = %d", a, b);

    return 0;
}