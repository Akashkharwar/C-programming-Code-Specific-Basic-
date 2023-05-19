#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d", &num);
    if(num==1)
        {
            printf("Your num is 1\n");
        }
    else if (num==2)
        {
            printf("Your num is 2\n");
        }
    else if (num==3)
        {
            printf("Your num is 3\n");
        }
    else 
        {
         printf("Your num is not 1, 2 or 3\n");
        }
    return 0;
}