#include <stdio.h>
// fibo ->> three var a,b,sum
// int nthfibo(int n)
// {
//     int sum = 0, a = 1, b = 1;
//     for (int i = 1; i <= n - 2; i++)
//     {
//         sum = a + b;
//         a = b;
//         b = sum;
//     }
//     return sum;
// }
int nthfibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int term = nthfibo(n - 1) + nthfibo(n - 2); // multiple recursive call
    return term;
}
int main()
{
    int n;
    printf("Enter which termn of the fibonacci you want : ");
    scanf("%d", &n);

    // printf("the %dth term of the fibonacci is : %d", n, nthfibo(n));
    printf("the %dth term of the fibonacci is : %d", n, nthfibo(n));
    return 0;
}