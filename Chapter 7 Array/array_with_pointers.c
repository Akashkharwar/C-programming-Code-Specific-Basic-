#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr, i;
    ptr=&marks[0];
     for(i=0; i<4; i++){
        printf("Enter Marks of student %d :\n",i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for(i=0; i<4; i++){
        printf(" Marks of student %d is: %d\n",i+1 ,marks[i]);
    }
    return 0;
}