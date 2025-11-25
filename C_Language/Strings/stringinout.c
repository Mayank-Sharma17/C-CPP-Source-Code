#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];

    // scanf("%[^\n]s", str); // only the first word will be considered --> %[^\n]s this will work for entire sentence

    // taking using using gets()
    gets(str); // entire sentence can be input

    printf("Your input was : %s", str);
    return 0;
}