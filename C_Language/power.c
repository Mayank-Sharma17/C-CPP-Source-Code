#include <stdio.h>
int main()
{

    int a, b;
    printf("Enter the base and power a ^ b : ");
    scanf("%d %d", &a, &b);

    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
        // printf("The %d^%d = %d\n", a, i, power); // if we have to print the power of 2^1 2^2...... in line
    }

    printf("The %d^%d = %d\n", a, b, power);
    return 0;
}