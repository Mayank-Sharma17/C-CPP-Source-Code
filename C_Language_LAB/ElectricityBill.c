#include <stdio.h>
int main(){
    float unit,bill_amount,Meter_charge;
    printf("UNITS        RATE\n");
    printf("0-100        6.50\n");
    printf("100-200      8.50\n");
    printf("200-350      10.50\n");
    printf("above 350    15.50\n");
    printf("Enter the consumption units :\n");
    scanf("%f",&unit);
    if(unit<=100)
    {
        bill_amount = unit*6.5;
        printf("The bill is %f\n",bill_amount);
    }
    else if(unit>100 && unit<=200)
    {
        bill_amount=100*6.5+(unit-100)*8.5;
        printf("The bill is %f\n",bill_amount);
    }
    else if(unit>200 && unit<=350)
    {
        bill_amount = 100*6.5+100*8.5+(unit-200)*10.50;
        printf("the bill is %f\n",bill_amount);
    }
    else if(unit>350)
    {
        bill_amount = 100*6.5+100*8.5+150*10.5+(unit-350)*15.50;
        printf("the bill is %f\n",bill_amount);
    }
    if (bill_amount>3500)
    {
        bill_amount = bill_amount*.10;
        printf("the additional meter charge is %f\n",bill_amount);

    }
    
    return 0;
}