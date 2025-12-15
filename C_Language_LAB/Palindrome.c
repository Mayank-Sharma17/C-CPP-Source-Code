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

    if(Reverse == num) {
        printf("The number %d is a palindrome", num);
    } else {
        printf("The number %d is not a palindrome", num);
    }

    return 0;
}