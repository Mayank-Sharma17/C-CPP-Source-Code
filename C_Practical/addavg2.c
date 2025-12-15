#include <stdio.h>
#include <stdlib.h>
int add(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += (*(arr + i));
    }
    return sum;
}

int avg(int *arr, int size)
{
    int sum = add(arr, size);
    return sum / size;
}
int main()
{
    int size;
    printf("Enter the size of array=");
    scanf("%d", &size);
    int *ptr;
    ptr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }
    int sum = add(ptr, size);
    int favg = avg(ptr, size);
    printf("%d\n", sum);
    printf("%d", favg);
    return 0;
}