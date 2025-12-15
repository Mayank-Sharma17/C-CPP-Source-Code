#include <stdio.h>
#include <string.h>
int main()
{
    char src[50];
    printf("Enter the strinh : ");
    scanf("%[^\n]s", src);
    char dest[50];

    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0'; // add null character in the end

    printf("src = %s\n", src);
    printf("dest = %s", dest);
    return 0;
}