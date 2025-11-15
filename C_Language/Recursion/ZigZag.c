#include <stdio.h>
// similar to preinpost code which is important dry run it
void ZigZag(int n)
{
    if (n == 0)
        return;
    printf("%d ", n);
    ZigZag(n - 1);
    printf("%d ", n);
    ZigZag(n - 1);
    printf("%d ", n);

    return;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    ZigZag(n);

    return 0;
}