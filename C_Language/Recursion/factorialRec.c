#include <stdio.h>
// int factorial(int x)
// {
//     int fact = 1;
//     for (int i = 2; i <= x; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
int factorial(int x)
{
    if (x == 0 || x == 1) // base case
        return 1;
    return x * factorial(x - 1);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d! = %d", n, fact);
    return 0;
}