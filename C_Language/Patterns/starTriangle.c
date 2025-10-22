#include <stdio.h>

// Function prototypes (declarations)
void starTriangle(int row);
void InvertedStarTriangle(int row);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    starTriangle(n); // passing n as an argument
    printf("\n");
    InvertedStarTriangle(n);

    return 0;
}

void starTriangle(int row) // function definitions : this function return void, and takes row as a parameter of int type
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void InvertedStarTriangle(int row)
{
    for (int i = 1; i <= row; i++)
    {
        // for (int j = row; j >= i; j--)
        // {
        //     printf("* ");
        // }
        for (int j = 1; j <= row + 1 - i; j++) // without j--
        {
            printf("* ");
        }
        printf("\n");
    }
}