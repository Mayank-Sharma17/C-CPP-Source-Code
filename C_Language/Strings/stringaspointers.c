#include <stdio.h>
int main()
{
    char str[] = "Mayank Sharma moon breathing";

    // char *ptr = &str[0]; // str, no need to add & because 0th index ka add he str ka addr hota h, ptr now points to -> ptr[0]
    char *ptr = str;
    printf("%p\n", &str[0]);
    printf("%p\n", str);

    // ptr --> stands for address *ptr --> value/char fetch krskte hai
    // we are going to print array using pointer

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    // we get another way of initilizing strings
    // character's pointer can also be used to store address of a string
    // NOTE :- such direct initlization using pointers result in a read-only memory allocation of character arrays and hence, causes undefined behaviour when we try to change the individual characters.
    // char *ptr = "programming";
    // ptr[0] = 'm' // ERROR!

    return 0;
}