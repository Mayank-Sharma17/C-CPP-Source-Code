#include<stdio.h>
int main() {

    int num, temp1, temp2, digits, sum=0, count=0;
    printf("Enter the number : ");
    scanf("%d", &num);

    temp1 = num;
    temp2 = num;

    while (temp1 > 0)
    {
        temp1 /= 10;
        count++; // counting number of digits in the number
    }

    while (temp2 > 0)
    {
        digits = temp2 % 10;
        
        int pow = 1;
        for(int i=1; i<=count; i++) {
            pow *= digits;
        }
        sum += pow;
        
        temp2 /= 10;
    }
    
    if(sum == num) {
        printf("The given number is a Armstrong number");
    } else {
        printf("The given number is not a Armstrong number");
    }

    return 0;
}