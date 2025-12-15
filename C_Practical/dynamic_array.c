#include <stdio.h>
#include <stdlib.h>
int min(int *ptr, int n);
int main()
{
    int size;
    printf("Enther the size of the array : ");
    scanf("%d", &size);

    int *ptr;
    ptr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", ptr + i);
    }

    int minelem = min(ptr, size);
    printf("the minimum element of the array = %d", minelem);
    return 0;
}
int min(int *ptr, int n)
{
    int min = *(ptr);
    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }
    return min;
}
int max(int *ptr, int n)
{
    int max = *(ptr);
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }
    return max;
}