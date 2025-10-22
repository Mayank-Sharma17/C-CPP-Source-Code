#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // IMPORTANT ***
    {

        if (i % 2 != 0)
            temp = 1;
        else
            temp = 0;

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", temp);
            if (temp == 0)
                temp = 1;
            else
                temp = 0;
        }
        printf("\n");
    }

    return 0;
}