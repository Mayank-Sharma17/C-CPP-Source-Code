#include <stdio.h>
void reverse(int arr[], int si, int ei)
{
    for (int i = si, j = ei; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 2;
    k = k % 5;
    reverse(arr, 0, 4);
    reverse(arr, 0, k - 1);
    reverse(arr, k, 4);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}