#include<stdio.h>
int main() {
    int n, fact = 1;

    printf("Enter the number : ");
    scanf("%d", &n);

    if(n > 0) {
        while(n >= 1) {
            fact *= n;
            n--;
        }
        printf("Factorial of %d = %d ", n, fact);

    } else if(n == 0) {
        printf("Factorial of zero is 1");
    } else {
        printf("Enter positive value");
    }

    return 0;
}