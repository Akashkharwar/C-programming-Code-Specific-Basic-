#include <stdio.h>
int factorial(int x);

int main()
{
    int a=5;
    printf("fcatorial of %d is %d \n",a , factorial(a));
    return 0;
}
int factorial(int x){
    printf("calling factorial(%d)\n", x);
    if(x==1 || x==0){
        return 1;
    }
    else{
        x=factorial(x-1)*x;
    }
}