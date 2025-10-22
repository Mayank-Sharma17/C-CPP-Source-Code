#include <stdio.h>
int main()
{
    // n=4
    // 1234567
    // 123 567
    // 12   67
    // 1     7

    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);

    int nst = n - 1, nsp = 1;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    for (int i = 1; i <= n - 1; i++)
    {
        int a = 1; // using extra variable
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%d", a);
            a++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }

    // USING DIFFERENT LOGIC - not working
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    return 0;
}