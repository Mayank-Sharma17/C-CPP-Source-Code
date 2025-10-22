#include <stdio.h>
int main()
{
    // n = 4
    // ABCDEFG
    // ABC EFG
    // AB   FG
    // A     G

    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);

    int nst = n - 1, nsp = 1;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("%c", i + 64);
    }
    printf("\n");
    for (int i = 1; i <= n - 1; i++)
    {
        int c = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%c", c + 64);
            c++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            c++;
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("%c", c + 64);
            c++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}