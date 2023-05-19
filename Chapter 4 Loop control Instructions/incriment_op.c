#include <stdio.h>
int main()
{
    int i=1;
    printf("the value after i++ is %d\n", i++);
    printf("the value after ++i is %d\n", ++i);
    printf("the value after i is %d\n", i);
    i+=10; //--> INCreasr i by 10
    printf("the value after i is %d\n", i);
    return 0;
}