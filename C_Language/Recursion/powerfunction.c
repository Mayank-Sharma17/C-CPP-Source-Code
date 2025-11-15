#include <stdio.h>

int power(int n, int p)
{
    // recurrence relation pow(n) = n*pow(n, p-1);
    if (p == 0)
        return 1;
    return n * power(n, p - 1);
}

int main()
{
    int n, p;
    printf("Enter the number and raise to the power : ");
    scanf("%d %d", &n, &p);

    int ans = power(n, p);
    printf("%d^%d = %d", n, p, ans);

    return 0;
}