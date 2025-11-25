#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "Mayank";
    int x = strlen(str);
    printf("%d", x);

    printf("\n");

    char str1[] = "Mayank"; // size already understood by comp 7
    char str2[7];           // without size can't declare
    strcpy(str2, str1);
    printf("%s", str2); // deep copy is created
    return 0;

    printf("\n");

    int str3[13] = "Mayank";
    int str4[] = "Sharma";
    strcat(str3, str4);
    printf("%s", str3); // str3 mae he merge hojaega without space min leng 13 dene padege

    return 0;
}