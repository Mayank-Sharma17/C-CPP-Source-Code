#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter rows and column -> m & n : ");
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == m || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}