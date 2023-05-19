#include <stdio.h>
int main()
{
    int n_subjects=5;
    int n_students=3;
    int i, j;
    int marks[3][5];
    for(i=0; i<n_students; i++){
        
        for(j=0; j<n_subjects; j++){
            printf("Marks of student %d in subject %d is:",i+1 ,j+1);
            scanf("%d",&marks[i][j]);
        }

    }
    for(i=0; i<n_students; i++){
        
        for(j=0; j<n_subjects; j++){
            printf("Marks of student %d in subject is: %d\n",i+1 ,j+1);
        }
    }
    return 0;
}