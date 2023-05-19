// #include <stdio.h>

// // Ques. Print gm ga gn using function
// void goodmorning();
// void goodafternoon();
// void goodnight();
// int main()
// {
//     goodmorning();
//     goodafternoon();
//     goodnight();
//     return 0;
// }
//  void goodmorning(){
//     printf("Good Morning Akash\n");
// }
//  void goodafternoon(){
//     printf("Good Afternoon Akash\n");
// }
//  void goodnight(){
//     printf("Good Night Akash\n");
// }

// find area of squre  using library function 

#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("Enter the value of side \n");
    scanf("%d", &side);
    printf("value of area is %f", pow (side, 2));
    return 0;
}