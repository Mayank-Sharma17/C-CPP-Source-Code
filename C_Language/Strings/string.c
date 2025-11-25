#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Mayank Sharma"; // autmatically computer will add '\0' in the array of chars internally
    // char str[] = {'H', 'e','l','l','o','\0'}; isme nahe krta, tumhe khud end mae '\0' lagana padega if you don't want to calculate size

    // str[0] = 'S';
    // str[1] = 98; // a-97 ascii

    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]); // printf("%c", i[str]); bilkul same kaam krega bus isko ese bhe likh sakte h
                              // or str[i] = i[str] = *(str + i) = *(i + str) sab same hai
        i++;
    }

    // direct print the string
    printf("\n%s\n", str);

    // using puts()
    puts(str);

    puts("Hello this puts consider everything inside double quotes as a string");

    return 0;
}