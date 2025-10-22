#include <stdio.h>
int main()
{
    int n, nst = 1;
    printf("Enter number of lines : ");
    scanf("%d", &n);

    int nsp = n / 2;

    for (int i = 1; i <= n; i++) // loop from 1 to n
    {
        for (int j = 1; j <= nsp; j++) // spaces
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++) // stars
        {
            printf("*");
        }

        if (i < (n / 2) + 1)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }

        printf("\n");
    }

    return 0;
}