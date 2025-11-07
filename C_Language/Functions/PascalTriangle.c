#include <stdio.h>

// using nCr concept
// n | r 0 1 2 3 4 5
// 0 |     1
// 1 |    1 1
// 2 |   1 2 1
// 3 |  1 3 3 1
// 4 | 1 4 6 4 1
// 5 |1 5 10 10 5 1

// int factorial(int num)
// {
//     int fact = 1;
//     for (int i = 2; i <= num; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int combination(int n, int r)
// {
//     int ncr = factorial(n) / (factorial(r) * factorial(n - r));
//     return ncr;
// }

int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    int nsp = n;

    for (int i = 0; i <= n; i++)
    {
        int first = 1;
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp--;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", first);
            first = first * (i - j) / (j + 1); // iC(j+1) using maths
            // printf("%d ", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}