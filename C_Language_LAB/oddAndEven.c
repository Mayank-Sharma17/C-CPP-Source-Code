#include <stdio.h>
// 4 approches

void oddeven1(int n)
{

    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return;
}

void oddeven2(int n)
{
    // Bit manipulation (Bitwise AND compares only the LSB) '&' -> odd - LSB bit -> 1 else even
    if ((n & 1) == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return;
}

void oddeven3(int n)
{
    // / and *
    if ((n / 2) * 2 == n)
        printf("Even\n");
    else
        printf("Odd\n");

    return;
}

void oddeven4(int n)
{
    // Left and right shifts are bitwise operations that move a number's binary digits (bits) left or right, acting like fast
    // multiplication/division by powers of two, filling empty spots with zeros (<<) or copying the sign bit (>>) for signed numbers.
    // Left shift (<<) multiplies by 2^N, while right shift (>>) divides by 2^N (integer division)

    if ((n >> 1 << 1) == n)
        printf("Even\n");
    else
        printf("Odd\n");

    return;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    oddeven1(n);
    oddeven2(n);
    oddeven3(n);
    oddeven4(n);
    return 0;
}

//------------------------------------------
// C ↔ C++ ↔ Java (Almost identical)

// If you know C operator precedence, you are ~95% correct in:

// C++
// Java

// Same in all three:

// > Arithmetic:     * / % > + -
// > Relational:     < > <= >=
// > Equality:       == !=
// > Bitwise:        & ^ |
// > Logical:        && ||
// > Assignment:     =

// AREBLA - Mnemonic - "All Rude Engineers Break Logical Agreements"