#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {7, 6, 5, 4, 3, 2, 1};
    int min = INT_MAX;
    int smin = INT_MAX;

    for (int i = 0; i <= 6; i++)
    {
        if (min > arr[i])
        {
            smin = min;   // storing the previous max
            min = arr[i]; // here we get the first mininum value -200
        }
        else if (smin > arr[i] && min != arr[i]) // min != arr[i] for same elements
        {                                        // min < arr[i]
            smin = arr[i];
        }
    }
    printf("%d", smin);
    return 0;
}