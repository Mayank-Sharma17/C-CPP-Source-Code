#include <stdio.h>

// Function prototype with parameters 'a' and 'b'
int add(int a, int b);

int main()
{
    int x = 5;
    int y = 3;

    // Function call with arguments 'x' and 'y'
    int sum = add(x, y);

    printf("Sum: %d\n", sum);
    return 0;
}

// Function definition with parameters 'num1' and 'num2'
int add(int num1, int num2)
{
    return num1 + num2;
}

// printf and scanf are library functions