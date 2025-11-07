#include <stdio.h>

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main()
{
    int n, r, ncr;
    printf("Enter number n and r : ");
    scanf("%d %d", &n, &r);

    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);

    ncr = combination(n, r);
    printf("%d", ncr);
    return 0;
}