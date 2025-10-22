#include <stdio.h>
int main()
{

    int n, m;
    printf("Enter the number of rows n and columns m : ");
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
    { // number of lines
        for (int j = 1; j <= m; j++)
        { // number of stars in each line
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}