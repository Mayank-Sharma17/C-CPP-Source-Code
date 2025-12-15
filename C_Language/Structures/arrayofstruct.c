#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct pokemon
    {
        char name[15];
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;

    pokemon arr[3]; // array of structure --> struct pokemon arr[10];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the details of pokemon %d------------\n", i + 1);
        printf("Enter name : ");
        scanf("%s", arr[i].name);
        printf("Enter hp : ");
        scanf("%d", &arr[i].hp);
        printf("Enter speed : ");
        scanf("%d", &arr[i].speed);
        printf("Enter attack : ");
        scanf("%d", &arr[i].attack);
        printf("Enter tier : ");
        scanf(" %c", &arr[i].tier);
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("name of p %d : %s\n", i + 1, arr[i].name);
        printf("hp of pokemon %d : %d\n", i + 1, arr[i].hp);
        printf("speed of pokemon %d : %d\n", i + 1, arr[i].speed);
        printf("attack of pokemon %d : %d\n", i + 1, arr[i].attack);
        printf("tier of pokemon %d : %c\n", i + 1, arr[i].tier);
        printf("\n");
    }

    return 0;
}