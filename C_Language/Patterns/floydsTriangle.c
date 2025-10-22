#include <stdio.h>
int main()
{
    int n, temp = 1;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", temp);
            temp++; // for odd no temp = temp+2 and ++ for simple num
        }
        printf("\n");
    }

    return 0;
}