#include<stdio.h>
int main() {

    int num, Reverse, temp, digit;
    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num; // taking temporary var to make changes in the original number
    Reverse = 0; 

    while (temp > 0)    
    {
        digit = temp % 10; // taking last digit
        temp /= 10; // removing last digit  
        Reverse = Reverse*10 + digit;
    }

    printf("Reverse of %d = %d", num, Reverse);

    return 0;
}