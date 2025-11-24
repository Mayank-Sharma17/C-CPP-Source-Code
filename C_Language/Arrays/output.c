#include <stdio.h>

int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d", arr[i]);
    }

    return 0;
}