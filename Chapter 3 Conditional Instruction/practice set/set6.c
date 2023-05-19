#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("Enter the num1\n");
    scanf("%d",  &num1);
    
    printf("Enter the num2\n");
    scanf("%d",  &num2);
 
    printf("Enter the num3\n");
    scanf("%d",  &num3);

    printf("Enter the num4\n");
    scanf("%d",  &num4);

    if (num1>num2 && num2>num3 && num3>num4){
        printf("num1 is greatest");
    }
    else if (num1<num2 && num2>num3 && num3>num4){
        printf("num2 is greatest");
    }
    else if (num1<num2 && num2<num3 && num3>num4){
        printf("num3 is greatest");
    }
    else{
        printf("num4 is greatest");
    }

    return 0;
}