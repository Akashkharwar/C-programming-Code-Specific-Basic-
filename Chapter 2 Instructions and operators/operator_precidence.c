#include <stdio.h>
int main()
{
    int x=4, y=9;
    printf("Value of 3*x - 8*y is %d \n", 3*x - 8*y);
    printf("value of 3*8/3*2 is %d \n", 3*8/3*2);
    // 3*8/3*2 this will not give correct ans
    /* 24/3*2
    8*3
    16*/
    return 0;
}