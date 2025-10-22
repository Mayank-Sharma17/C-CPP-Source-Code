#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);

    int temp = 0;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            temp++;
            printf("%d", temp);
        }
        else
        {
            temp--;
            printf("%d", temp);
        }
    }
    printf("\n");

    int num = n - 1, spaces = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("%d", j);
        }
        for (int k = 1; k <= spaces; k++)
        {
            printf(" ");
        }
        for (int j = num; j >= 1; j--)
        {
            printf("%d", j);
        }
        num--;
        spaces += 2;
        printf("\n");
    }
    return 0;
}