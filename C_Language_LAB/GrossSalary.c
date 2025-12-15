// Write a program to calculate gross salary

#include<stdio.h>
void main() {
    float BS, HRA, DA, TA, CA, EPF, total, GS;

    printf("Please enter the basic salary BS\n");
    scanf("%f", &BS);

    HRA = BS*0.20;
    DA = BS*0.55;
    TA = BS*0.09;
    CA = BS*0.05;
    EPF = BS*0.12;
    
    total = BS+HRA+DA+TA+CA+EPF;
    GS = total - 2*EPF;

    printf("Your basic salary is = %f\n", BS);
    printf("Your HRA is = %f\n", HRA);
    printf("Your DA is = %f\n", DA);
    printf("Your CA is = %f\n", CA);
    printf("Your EPF is = %f\n", EPF);
    printf("Your total salary is = %f\n", total);
    printf("Your gross salary = %f\n", GS);
}