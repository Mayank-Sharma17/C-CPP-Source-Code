#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {-10, -4, -200, -80, -19, -5, -12};
    int max = INT_MIN;
    int smax = INT_MIN;

    // for (int i = 0; i <= 6; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // // max = -4
    // for (int i = 0; i <= 6; i++)
    // {
    //     if (arr[i] != max && smax < arr[i])
    //     {
    //         smax = arr[i];
    //     }
    // }

    // single loop / single pass
    for (int i = 0; i <= 6; i++)
    {
        if (max < arr[i])
        {
            smax = max; // storing the previous max
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i]) // max != arr[i] for same elements
        {                                        // max > arr[i]
            smax = arr[i];
        }
    }
    printf("%d", smax);
    return 0;
}