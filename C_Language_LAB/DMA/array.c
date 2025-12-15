#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int)); // 20 bytes stored

    for (int i = 0; i < 5; i++)
    {
        printf("enter the element %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("element %d : %d\n", i + 1, ptr[i]);
    }

    free(ptr);
    return 0;
}