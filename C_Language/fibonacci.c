#include <stdio.h>
int main()
{

    // 1 1 2 3 5 8 13 21 34 55 89........print nth fibonacci number
    int n, a = 1, b = 1, sum = 1; // sum = 1 because when we enter for 2th term it will give zero if we take sum = 0
    printf("Enter the term you want in fibonacci series : ");
    scanf("%d", &n);

    for (int i = 1; i <= n - 2; i++)
    { // because when we add a+b and store in sum  we get the 3rd term
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("The %dth fibonacci term is %d", n, sum);

    return 0;
}