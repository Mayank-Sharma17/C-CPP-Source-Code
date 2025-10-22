#include <stdio.h>
int main()
{
    // n = 3
    // 2n-1 = 5 lines
    // 33333
    // 32223
    // 32123
    // 32223
    // 33333

    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);

    int min = 0;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            if (a > n)
                a = 2 * n - i;
            int b = j;
            if (b > n)
                b = 2 * n - j;
            if (a < b)
                min = a;
            else
                min = b;
            printf("%d", n + 1 - min);
        }
        printf("\n");
    }
    return 0;
}

// you can think it like a distance concept - little complicated
// like taking any number and calculate it distance from all the four sides and then find the minimum or max