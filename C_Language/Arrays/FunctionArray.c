#include <stdio.h>
// swap two numbers using array
// void fun(int *x)
// {
//     *x = 5;
//     return;
// }
void swap(int arr[])
{ // here array is passed by reference
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}
int main()
{
    int arr[2] = {2, 9};
    printf("%d %d\n", arr[0], arr[1]);
    swap(arr);
    printf("%d %d\n", arr[0], arr[1]);
    return 0;
}