#include <stdio.h>

void change(int a);
int main()

{
    int b=344;
    printf("value of b before change is %d", b);
    change(b);
    printf("value of b after change is %d", b);
    
    return 0;
}
    void change(int a){
        int a=77;
    }
