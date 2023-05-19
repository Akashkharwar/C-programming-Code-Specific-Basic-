#include <stdio.h>
int main()
{
    int x, y, sum, multi, mod;
    float i, j, div, sub;
    printf("enter value of x and y\n");
    scanf("%d %d", &x ,&y);

    printf("sum of x and y is %d\n", sum= x+y);
    printf("multi of x and y is %d\n", multi= x*y);
    printf("mod of x and y is %d\n", mod= x%y);
    
    printf("enter value of i and j\n");
    scanf("%f %f", &i ,&j);
    
    printf("sub of i and j %f \n", sub=i-j);
    printf("div of i and j %f \n", div=i/j);


    return 0;
}