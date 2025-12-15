#include <stdio.h>

int main()
{
    FILE *fnum, *feven, *fodd;
    int n, count;

    // Step 1: Write integers to numbers.txt
    fnum = fopen("numbers.txt", "w");
    if (fnum == NULL)
    {
        printf("Error opening numbers.txt\n");
        return 1;
    }

    printf("How many integers do you want to enter? ");
    scanf("%d", &count);

    printf("Enter %d integers:\n", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &n);
        fprintf(fnum, "%d\n", n);
    }
    fclose(fnum);

    // Step 2: Read from numbers.txt and classify
    fnum = fopen("numbers.txt", "r");
    feven = fopen("even.txt", "w");
    fodd = fopen("odd.txt", "w");

    if (fnum == NULL || feven == NULL || fodd == NULL)
    {
        printf("Error opening output files.\n");
        return 1;
    }

    while (fscanf(fnum, "%d", &n) != EOF)
    {
        if (n % 2 == 0)
            fprintf(feven, "%d\n", n); // even file
        else
            fprintf(fodd, "%d\n", n); // odd file
    }

    fclose(fnum);
    fclose(feven);
    fclose(fodd);

    printf("Even numbers stored in even.txt\n");
    printf("Odd numbers stored in odd.txt\n");

    return 0;
}
