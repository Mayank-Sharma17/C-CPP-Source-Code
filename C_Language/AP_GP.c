#include <stdio.h>
int main()
{

    // 100 97 94 ........
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", 100 - 3 * i);
    }

    // --------------------------------------

    int a = 100;
    for (int i = 1; a > 0; i++)
    {
        printf("d ", a);
        a = a - 3;
    }

    // ------------------------------------- using extra variable
    // a = 100
    // for(1 to <=n) {
    //      printf()
    //      update the condition a = a*k anything
    //  }

    return 0;
}