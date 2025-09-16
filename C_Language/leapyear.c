#include <stdio.h>
int main()
{
    // check weather a year is leap year or not
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Year is a leap year");
    }
    else
    {
        printf("Year is not a leap year");
    }

    return 0;
}