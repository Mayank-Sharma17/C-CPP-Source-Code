#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number nxn matrix : ");
    scanf("%d", &n);
    int array1[n][n];
    int array2[n][n];
    int sum[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of matrix1 [%d][%d] : ", i, j);
            scanf("%d", &array1[i][j]); // rows wise entry
        }
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of matrix2 [%d][%d] : ", i, j);
            scanf("%d", &array2[i][j]); // rows wise entry
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j]; // can perform both addition and subtraction
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}