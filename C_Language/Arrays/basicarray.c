#include <stdio.h>
int main()
{
    int arr[5] = {2, 4, 8, 6, 1}; // declaration + initialization
    arr[4] = 6;                   // updation

    for (int i = 0; i <= 4; i++)
    {
        printf("\nEnter the element number %d : ", i + 1);
        scanf("%d", &arr[i]); // taking input
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); // output
    }
    return 0;
}