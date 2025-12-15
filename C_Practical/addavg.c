#include <stdio.h>

int add(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int aver(int arr[], int n)
{
    // call for add
    int sum = add(arr, n);
    int avg = sum / n;
    return avg;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = add(arr, n);
    printf("sum = %d\n", sum);

    int avg = aver(arr, n);
    printf("average = %d ", avg);

    return 0;
}