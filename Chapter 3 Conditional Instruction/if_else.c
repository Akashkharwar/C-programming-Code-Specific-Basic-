#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age \n");
    scanf("%d", &age);

    if(age>23)
        {
            printf("You can drive\n");
        }
    else
        {
            printf("You cannot drive\n");
        }
    if(age==50)
        {
            printf("half century\n");
        }
    return 0;
}