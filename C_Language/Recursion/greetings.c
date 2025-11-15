#include <stdio.h>

// void greetings(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         printf("Good Morning\n");
//     }
// }
// using recursion
void greetings(int n)
{
    if (n == 0)
        return;
    printf("Good Morning\n");
    greetings(n - 1);
    return;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    greetings(n);
    return 0;
}