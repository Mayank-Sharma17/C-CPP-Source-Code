#include <stdio.h>
int main()
{
    // 123456 --> sum of even digits = 2+4+6=12
    // why we use while loop instead of for loop --> This logic doesn't depend on a fixed number of iterations (like 5 times or 10 times), but rather, runs until the number becomes 0, no matter how many digits it has.
    int n, sum = 0, ld = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    while (n > 0) // or n!=0
    {
        ld = n % 10;     // last digit
        if (ld % 2 == 0) // if last digit is even then we add it in the sum
            sum += ld;
        n = n / 10; // remove the last digit of number
    }
    printf("The sum of the even digits of the number is : %d", sum);

    return 0;
}

// REVERSE OF A NUMBER -> similar pattern but there we take the last digit and add it in the sum by *multiplying 10* first !