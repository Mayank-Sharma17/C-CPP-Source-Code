#include<stdio.h>
int main() {
    // Find grade using if else
    int COA, MFCA, CP, PS, RMT, AVG;
    printf("Enter the marks of COA, MFCA, CP, PS, RMT out of 100 in respective order :-\n");
    scanf("%d %d %d %d %d", &COA, &MFCA, &CP, &PS, &RMT);

    AVG = (COA+MFCA+CP+PS+RMT)/5;

    if(AVG<40) {
        printf("Grade --> F");
    } else if(AVG < 50) {
        printf("Grade --> E");
    } else if(AVG < 60) {
        printf("Grade --> D");
    } else if(AVG < 70) {
        printf("Grade --> C");
    } else if(AVG < 80) {
        printf("Grade --> B");
    } else if(AVG < 90) {
        printf("Grade --> A");
    } else if(AVG < 95) {
        printf("Grade --> A+");
    } else {
        printf("Not a valid grade");
    }
    return 0;   
}