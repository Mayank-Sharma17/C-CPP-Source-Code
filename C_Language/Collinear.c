#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, x3, y3, m1, m2;
    printf("Enter the coordinated A, B and C respectively...\n");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);

    if (m1 == m2)
    {
        printf("The three points are collinear means lie on a straight line");
    }
    else
    {
        printf("The three points doesn't lie on the straight line");
    }
    return 0;
}