#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    // Odd number Triangle*** n-> no of rows, hint : odd no. -> AP concept -> formula

    // for (int i = 1; i <= n; i++) code is correct but we are not consering the input as rows instead we are considering the last odd no.
    // {
    //     if (i % 2 != 0)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             if (j % 2 != 0)
    //             { // print odd number
    //                 printf("%d ", j);
    //             }
    //         }
    //         printf("\n");
    //     }
    // }
    for (int i = 1; i <= n; i++)
    {
        int temp = 1;                // using extra var for the AP, because in the second loop we have to print 4 odd numbers
        for (int j = 1; j <= i; j++) // this will print odd no. : 1 3 5 7 ....
        {
            printf("%d ", temp);
            temp += 2;
        }
        printf("\n");
    }

    return 0;
}