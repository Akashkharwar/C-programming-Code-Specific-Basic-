#include <stdio.h>
// sum is function which takes a and b as input and return an integer as output
int sum( int a, int b); // funtion prototype
int main()
{
    int c;
    c=sum(2, 5); //fuction call
    printf("%d \n", c);
    return 0;
}

int sum(int a, int b){
    int result;
    result= a+b;
    return result;
}