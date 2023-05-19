#include <stdio.h>
int main()
{
    int n, i, c;
    printf("entre the value of n\n");
    scanf("%d", &n);

    for(i=1; i<=10; i++){
        printf("%d*%d=%d\n",n, i,  c=n*i);
    }
    return 0;
}