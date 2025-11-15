#include <stdio.h>
// print 1 to n
// void increasing(int x, int n)
// { // using extra parameter -> parameterized
//     if (x > n)
//         return;
//     printf("%d\n", x);
//     increasing(x + 1, n);
//     return;
// }
void increasing(int n)
{ // without extra parameter -> after recursive call
    if (n == 0)
        return;
    printf("%d\n", n);
    increasing(n - 1);
    printf("%d\n", n);
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    increasing(n);
    return 0;
}