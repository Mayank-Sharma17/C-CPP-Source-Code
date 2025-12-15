#include<stdio.h>
int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Prime factors of %d are : ", num);

    for(int i=2; i<=num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
            while (num % i == 0) {
                num /= i;
            }
        }
    }
    
    return 0;
}