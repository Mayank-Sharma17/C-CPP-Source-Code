#include <stdio.h>
int sum(int x)
{
    if (x == 0 || x == 1) // base case
        return x;
    return x + sum(x - 1);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int fsum = sum(n);
    printf("%d", fsum);
    return 0;
}