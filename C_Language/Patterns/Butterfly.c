#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            for (int k = 1; k <= 2 * (n - i); k++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                printf("*");
            }
            for (int k = 1; k <= 2 * (i - n); k++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * n - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}