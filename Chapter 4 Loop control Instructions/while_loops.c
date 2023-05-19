#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    a=0;
    while(a<=10)
    // while(a>10) >-- this will lead to an infinte loop
        {
            printf("%d\n", a);
            a++;
        }
    return 0;
}