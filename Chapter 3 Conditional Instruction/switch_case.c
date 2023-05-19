#include <stdio.h>
int main()
{
    int rating;
    printf("Enter your rating\n");
    scanf("%d", &rating);
    
    switch(rating)
        {
            case 0:
                printf("Your rating is 1\n");
            break;
            case 5:
                printf("Your rating is 2\n");
            break;
            case 10:
                printf("Your rating is 3\n");
            break;
            case 15:
                printf("Your rating is 4\n");
            break;
            case 20:
                printf("Your rating is 5\n");
            break;
            default:
                printf("Your rating is invalid\n");
            break;

        }
    return 0;
}