#include <stdio.h>
int main()
{

    // 2 3 5 7 11 13 17...... (loops)
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int flag = 0; // using extra var
    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0) // i is a factor of n
        {
            // printf("the given number is composite\n");
            flag = 1;
            break;
        }
    }

    if (n == 1)
        printf("1 is neither prime nor composite");
    else if (flag == 1)
        printf("the given number is prime\n");
    else
        printf("the given number is composite\n");

    return 0;
}