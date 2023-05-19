#include <stdio.h>
int main()
{
    int age;
    int vippass=0;
    vippass=1;
    printf("Enter the age \n");
    scanf("%d", &age);

    // if(!(age>=18 && age<=70))
    if((age>=18 && age<=70) || (vippass==1))
        {
            printf("You can drive\n");
        }
    else
        {
            printf("You cannot drive\n");
        }
   
    return 0;
}