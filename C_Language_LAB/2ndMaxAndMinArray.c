#include <stdio.h>
#include <limits.h>
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
    int max = INT_MIN, smax = INT_MIN;
    // int min = INT_MAX, smin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
        // if (min > arr[i])
        // {
        //     smin = min;
        //     min = arr[i];
        // }
        // else if (smin > arr[i] && min != arr[i])
        // {
        //     smin = arr[i];
        // }
    }

    printf("%d", smax);
    // printf("%d", smin);
    return 0;
}