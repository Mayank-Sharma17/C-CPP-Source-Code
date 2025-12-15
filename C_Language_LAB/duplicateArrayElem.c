#include <stdio.h>
int main()
{
    // check number of duplicate elements in the array
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sorting O(n^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int prev;
    int count = 0;
    int flag = 0;               // false
    for (int i = 0; i < n; i++) // O(n)
    {
        if (prev != arr[i])
        {
            prev = arr[i];
            flag = 0;
        }
        else if (prev == arr[i] && !flag)
        { // flag -> 1 only one time run
            count++;
            flag = 1;
            printf("%d ", arr[i]);
        }
    }
    printf("\n%d", count);

    return 0;
}