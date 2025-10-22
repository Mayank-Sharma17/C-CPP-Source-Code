#include <stdio.h>
#include <math.h>
int main()
{
    // WAP to print the armstrong numbers from 1 to 500
    // ex : 153 --> 1^3 + 5^3 + 3^3 = 153

    for (int num = 1; num <= 500; num++)
    {
        int temp1, temp2, lastdigit, sum = 0, count = 0;
        temp1 = num;
        temp2 = num;

        while (temp1 > 0)
        { // this will count number of digits in the num
            temp1 /= 10;
            count++;
        }

        while (temp2 > 0)
        { // check if a number is armstrong number or not
            lastdigit = temp2 % 10;
            sum += (int)(pow(lastdigit, count) + 0.5);
            temp2 /= 10;
        }

        if (sum == num)
            printf("%d is a armstrong number\n", num);
        else
            continue;
    }

    return 0;
}