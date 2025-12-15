#include <stdio.h>
#include <string.h>
struct pokemon
{
    char name[20];
    int attack;
    int speed;
} p1, p2, p3;

int main()
{

    strcpy(p1.name, "pikachu");
    p1.attack = 50;
    p1.speed = 100;
    strcpy(p2.name, "charizard");
    p1.attack = 60;
    p1.speed = 90;
    strcpy(p3.name, "mewtow");
    p1.attack = 300;
    p1.speed = 200;

    printf("%s\n", p1.name);
    printf("%s\n", p2.name);
    printf("%s\n", p3.name);

    return 0;
}