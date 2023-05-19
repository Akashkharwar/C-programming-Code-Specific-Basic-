#include <stdio.h>
int sum( int a, int b);
int main(){
    int a=4, b=7;
    printf("Value of a and b is %d and %d\n", a, b);
    printf("sum of 4+7 is %d\n", sum(a, b));
    printf("Value of a and b after call function is %d and %d\n", a, b);
    return 0;
}
int sum(int a , int b){
    int c;
    c=a+b;
    a=768;
    b=969;
    return c;
}