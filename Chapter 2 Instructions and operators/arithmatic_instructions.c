#include <stdio.h>
#include <math.h>
int main()
{
int a = 4 , b = 8;
int z = a*b; // legal
// b*a = z; // illegal 
printf("Value of a+b is %d \n", a+b);
printf("Value of a-b is %d \n", a-b);
printf("Value of z is %d \n", z);
printf("Value of a/b is %f \n", a/b);
printf("when 5 divided by 2 gives remainder %d\n", 5%2);
printf("when -5 divided by 2 gives remainder %d\n", -5%2);
printf("when 5 divided by -2 gives remainder %d\n", 5%-2);
//   no operator is assumed to be present 
// printf("when 4*5 is  %d\n", (4)(5)); --> will not give 20!!
printf("when 4*5 is  %d\n", (4)*(5));
// there is no operator to perform exponatiation function 
printf("value of 4 to the power 5 is %f\n", 4^5); // --> will not give ans !!
printf("value of 4 to the power 5 is %f\n", pow(4, 5)); 

printf("value of 6 + 5 is %d\n", 6+5);
printf("value of 6 + 5.2 is %f\n", 6+5.2);
printf("value of 6.1 + 5.1 is %f\n", 6.1+5.1);
printf("value of 5/2 is %d\n", 5/2);
printf("value of 5/2 is %f\n", 5/2);
printf("value of 3.0/9 is %f\n", 3.0/9);

return 0;
}