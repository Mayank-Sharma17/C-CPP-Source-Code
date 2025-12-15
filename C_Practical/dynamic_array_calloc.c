#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *arr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", arr + i);
    }
    printf("Elements : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i)); // arr[i][j] = *(*(arr+i)+j)
    }

    free(arr);

    return 0;
}