// Write a program to find T in simple interest 

#include<Stdio.h>
void main() {
    // SI = PRT/100
    
    int p;
    float si, r, t;

    printf("Please enter si, principal amount and rate of interest\n");
    scanf("%f %d %f", &si, &p, &r);

    t = (si*100)/(p*r);

    printf("time = %f years", t);
}