#include <stdio.h>
int main()
{
    // n=4
    // *******
    // *** ***
    // **   **
    // *     *

    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);

    int nst = n - 1, nsp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("*");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}