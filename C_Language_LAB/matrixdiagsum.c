#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number nxn matrix : ");
    scanf("%d", &n);
    int array[n][n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of matrix [%d][%d] : ", i, j);
            scanf("%d", &array[i][j]); // rows wise entry
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sum += array[i][j];
        }
    }

    printf("the sum of the diagonal elements of the %dx%d matrix = %d", n, n, sum);

    return 0;
}