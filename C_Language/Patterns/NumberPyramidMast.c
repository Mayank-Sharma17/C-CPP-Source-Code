#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j <= n - i; j++) // for spaces
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) // simple num triangle
        {
            printf("%c", k + 64);
        }
        int temp = i - 1;
        for (int l = 1; l <= i - 1; l++) // opp. num triangle
        {
            printf("%c", temp + 64);
            temp--;
        }
        printf("\n");
    }

    return 0;
}