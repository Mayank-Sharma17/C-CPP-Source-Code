#include <stdio.h>

void greet() // external function
{

    printf("Good Morning\n");
    printf("How are you ?\n");
    return; // khatam krna function ko
}

int add(int a, int b) // arguments (), int return type
{
    return a + b;
}

int main()
{
    greet();   // function call - ham isko loops ke ander or if else ke ander bhe dalskte hai
    greet();   // function call
    greet();   // function call
    add(3, 5); // pass by value
    return 0;
}