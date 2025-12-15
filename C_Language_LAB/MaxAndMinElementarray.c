#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxelem = arr[0];
    int minelem = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (maxelem < arr[i])
            maxelem = arr[i];
        if (arr[i] < minelem)
            minelem = arr[i];
    }

    printf("Maximum element in the given array is : %d\n", maxelem);
    printf("Maximum element in the given array is : %d", minelem);
    return 0;
}