#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main()
{
    goodmorning();
    return 0;
}
 void goodmorning(){
    printf("Good Morning Akash\n");
    goodafternoon();
}
 void goodafternoon(){
    printf("Good Afternoon Akash\n");
    goodnight();
}
 void goodnight(){
    printf("Good Night Akash\n");
}