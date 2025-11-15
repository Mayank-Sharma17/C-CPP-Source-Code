#include <stdio.h>

int maze2(int n, int m)
{
    int RightWays = 0;
    int DownWays = 0;
    if (n == 1 && m == 1)
        return 1;
    if (n == 1)
    { // right only
        RightWays += maze2(n, m - 1);
    }
    if (m == 1)
    { // down only
        DownWays += maze2(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        RightWays += maze2(n - 1, m);
        DownWays += maze2(n, m - 1);
    }
    int totalWays = RightWays + DownWays;
    return totalWays;
}

int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns : ");
    scanf("%d", &m);

    int noOfWays = maze2(n, m);
    printf("%d", noOfWays);

    return 0;
}