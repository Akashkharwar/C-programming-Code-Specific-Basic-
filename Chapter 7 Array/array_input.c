#include <stdio.h>
int main()
{
    int marks[4];
    printf("Marks of student 1:\n");
    scanf("%d", &marks[0]);
    printf("Marks of student 2:\n");
    scanf("%d", &marks[1]);
    printf("Marks of student 3:\n");
    scanf("%d", &marks[2]);
    printf("Marks of student 4:\n");
    scanf("%d", &marks[3]);

    printf("Marks of student enterd are %d, %d, %d and %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}