#include <stdio.h>
int main()
{
    int i=0;
    // do{
    //     printf("%d\n", i);
    //     i++;

    //     if(i==4){
    //         break;
    //     }
        
    // }while(i<10);

    // while(i<10){
    //     printf("%d\n", i);
    //     i++;

    //     if(i==4){
    //         break;
    //     }
    // }
    for(int i=0 ;i<10 ;i++){
        printf("%d\n", i);
        if(i==4){
            break;
        }
    }

    return 0;
}