#include <stdio.h>
// recurrence relation pow(n) = n*pow(n, p-1);
// optimization -> a^b = a^b\2 * a^b\2 (if n is even)
//                 a^b = a^b\2 * a^b\2 * a (if n is odd)

int powerlog(int n, int p)
{
    if (p == 0)
        return 1; // also covers the case of any^0 = 1
    int x = powerlog(n, p / 2);
    if (p % 2 == 0)
        return x * x;
    else
        return x * x * n;
    return x * x;
}

int main()
{
    int n, p;
    printf("Enter the number and raise to the power : ");
    scanf("%d %d", &n, &p);

    int ans = powerlog(n, p);
    printf("%d^%d = %d", n, p, ans);

    return 0;
}