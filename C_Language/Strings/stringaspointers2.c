#include <stdio.h>
int main()
{
    // char *str = "Mayank Sharma";
    // str = "Mayank";
    // printf("%s", str); // because the pointer now moved to new string Mayank;

    char str[] = "Mayank Sharma";
    char *ptr = str; // first char add (ptr is a shallow copy --> because string wahe hai 'str')
    ptr = "Mayank";
    printf("%s", str); // here ptr is moved to the string Mayank but the str is still same so mayank sharma will be printed

    // agar mae ye kru
    *ptr = 'S';
    printf("%s", str);

    // Deep copy (different string hoo!)
    char str2[] = "Mayank Sharma";
    printf("%s", str2); // both str and str2 are different strings

    return 0;
}