#include <stdio.h>
void reverse(int arr[])
{
    int i = 0, j = 4; // swaping first and last index elements till i<j
    while (i < j)
    {
        // arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // int arrcp[5];

    // for (int i = 0; i <= 4; i++)
    // {
    //     arrcp[i] = arr[4 - i];
    // }
    // for (int i = 0; i <= 4; i++)
    // {
    //     printf("%d ", arrcp[i]);
    // }

    // without using extra array --------------------
    // using 2 pointer or variables

    reverse(arr);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}