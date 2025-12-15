#include <stdio.h>
int main()
{
    int n;
    printf("Enter which element you want to find : ");
    scanf("%d", &n);

    int arr[] = {1, 5, 8, 4, 3, 10, 15, 20};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == n)
        {
            printf("the given number %d is present in the array", n);
            return 0;
        }
    }
    printf("number not found!");
    return 0;
}