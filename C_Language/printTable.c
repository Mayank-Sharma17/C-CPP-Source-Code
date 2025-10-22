#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number for which you want to print the table...\n");
    scanf("%d", &n);
    printf("The table of %d is : \n", n);

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d x %d = %d\n", n, i, n * i);
    // }

    // using addition
    for (int i = n; i <= n * 10; i = i + n)
    {
        printf("%d\n", i);
    }

    return 0;
}