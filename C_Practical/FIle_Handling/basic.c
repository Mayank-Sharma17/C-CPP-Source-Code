#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "w");

    // char c = fgetc(ptr); // read character by character
    // printf("The character i read was %c\n", c);
    // c = fgetc(ptr); // read character by character
    // printf("The character i read was %c\n", c);

    // char str[4];
    // fgets(str, 7, ptr); // reads string
    // printf("The string is %s\n", str);

    fputc('o', ptr);                     // clear the file then write
    fputs("this is mayank sharma", ptr); // clear add string in file

    fputc('Manu', ptr);

    fclose(ptr);
    return 0;
}