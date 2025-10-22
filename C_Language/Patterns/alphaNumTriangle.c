#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) // i-> even
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c", j + 64);
            }
            printf("\n");
        }
        else // i -> odd
        {
            for (int k = 1; k <= i; k++)
            {
                printf("%d", k);
            }
            printf("\n");
        }
    }

    return 0;
}