#include <stdio.h>
int main()
{
    float income, tax=0;
    printf("Income of the emplyoee is ");
    scanf("%f", &income);

    if(income>250000 && income<=500000){
        tax=tax +0.05*(income - 250000);
    }
    if(income>500000 && income<=1000000){
        tax=tax + 0.2*(income - 500000);
    }
    if(income>1000000){
        tax=tax +0.3*(income - 1000000);
    }
    printf("tax paid by the employee is %f", tax);
    return 0;
}