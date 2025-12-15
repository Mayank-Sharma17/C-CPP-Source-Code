#include <stdio.h>
#include <string.h>
int main()
{
    char src[100];
    printf("Enter the string : ");
    scanf("%[^\n]s", src);
    int len = strlen(src);

    for (int i = 0; i < len / 2; i++)
    {
        char temp = src[i];
        src[i] = src[len - i - 1];
        src[len - i - 1] = temp;
    }

    printf("%s", src);

    return 0;
}