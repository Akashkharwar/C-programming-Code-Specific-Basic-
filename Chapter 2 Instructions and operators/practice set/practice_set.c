#include <stdio.h>
int main()
{
    // Q.1 valid in c or not
        // int a; b=a; !! invalid
        // int v=3^3;   // valid
        // char dt= '21 dec 2020'; !! invalid;

    // Q.3 divisibility of 97

        int num;
        printf("enter the number \n");
        scanf("%d",&num);
        printf("Divisibility test returns: %d", num%97);
    // Q.4 step by step evaluation of 3*x/y-z+k

        int x=2, y=3, z=3, k=1;
        int result;
        printf("result is %d \n", result = 3*x/y-z+k);
        /* 3*2/3-3+1
           6/3-3+1
           2-3+1
           -1+1
           0
        */
    return 0;
}
