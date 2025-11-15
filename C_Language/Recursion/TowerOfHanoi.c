#include <stdio.h>
// imp*
void hanoi(int n, char s, char h, char d)
{
    if (n == 0)
        return;
    hanoi(n - 1, s, d, h); // n-1 disks, keep faith that upper 2 disks alreay in the middle if n=3
    printf("%c -> %c\n", s, d);
    hanoi(n - 1, h, s, d);
    return;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}