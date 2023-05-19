#include <stdio.h>
int main()
{
    int grade, A=100;
    printf("Enter your num\n");
    scanf("%d", &grade);
    
    switch(grade/10)

        {
            case 10:
            printf("Your grade is A\n");
            break;
            case 9:
                printf("Your grade is B\n");
            break;
            case 8:
                printf("Your grade is C\n");
            break;
            case 7:
                printf("Your grade is D\n");
            break;
            default:
                printf("Your grade is E\n");
            break;

        }
    return 0;
}