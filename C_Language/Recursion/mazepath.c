#include <stdio.h>

int mazepath(int cr, int cc, int er, int ec)
{
    int RightWays = 0;
    int DownWays = 0;
    if (cr == er && cc == ec)
        return 1; // base case
    if (cr == er)
    { // only right ways
        RightWays += mazepath(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    { // only down ways
        DownWays += mazepath(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    { // call both
        RightWays = mazepath(cr, cc + 1, er, ec);
        DownWays = mazepath(cr + 1, cc, er, ec);
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

    int noOfWays = mazepath(1, 1, n, m);
    printf("%d", noOfWays);

    return 0;
}