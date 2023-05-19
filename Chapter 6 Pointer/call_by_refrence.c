#include <stdio.h>
void swap( int *a, int *b);
void wrongd_swap( int a, int b);
int main(){
    int x=4 ,y=5;
    printf("Value of x and y is %d and %d\n", x, y);
    // wrong_swap(x, y); Will not work due to call by value
    swap(&x, &y); //Will work due to call by refrence
    printf("Value of x and y is %d and %d\n", x, y);
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}