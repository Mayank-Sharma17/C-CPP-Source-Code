#include <stdio.h>
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        for (int k = 0; k <= 2 * i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        for (int k = 0; k <= 2 * i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            int res = (i + j) % 2;
            printf("%d ", res);
        }
        printf("\n");
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int res = 1;
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%d ", res);
            res++;
        }
        printf("\n");
    }
}
void atm(int n)
{
    int fhn, hn, thn;
    int t = n;
    printf("Amount = %d\n", n);
    fhn = t / 500;
    t = t % 500;
    thn = t / 200;
    t = t % 200;
    hn = t / 100;
    t = t % 100;
    printf("500-: %d\n200-: %d\n100-: %d", fhn, thn, hn);
    printf("\nRemaining = %d", t);
}
int main()
{
    //  Diamond Pattern
    printf("Which code you want to Run -:\n1.Pattern 1\n2.Pattern2\n3.Pattern3\n4.ATM \n");
    int a, n;
    scanf("%d", &a);
    printf("Enter the Value of n-: \n");
    scanf("%d", &n);

    if (a == 1)
    {
        pattern1(n);
    }
    if (a == 2)
    {
        pattern2(n);
    }
    if (a == 3)
    {
        pattern3(n);
    }
    if (a == 4)
    {
        atm(n);
    }
}