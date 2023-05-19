#include <stdio.h>
void display(); //function prototype
int main()
{
    printf("Intializing display function\n");
    display(); //function call
    printf("Display function has finished its work\n");

    return 0;
}

    // call definition
    void display(){
        printf("This is a display\n");
    }