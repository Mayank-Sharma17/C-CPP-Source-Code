#include <stdio.h>
int main()
{

    // product of two numbers = LCM * HCF of it
    int num1, num2, min, LCM, GCD;
    printf("Enter the two numbers num1 and num2 resp. : ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2)
        min = num1;
    else
        min = num2;

    for (int i = min; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
            break;
        }
    }

    // num1*num2 = LCM(num1, num2)*HCF(num1, num2)
    LCM = (num1 * num2) / GCD;
    printf("LCM = %d", LCM);
    printf("GCD = %d", GCD);

    return 0;
}