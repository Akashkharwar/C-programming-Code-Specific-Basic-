// #include <stdio.h>
// int main()
// {
//     int a;
//     while (a<=20){
//     if (a>=10)
//         {
//             printf(" %d\n", a);
//         }
//     a++;
//     }
    
//     return 0;
// }

// print n natural no. intput 4, output 1234
// #include <stdio.h>
// int main()
// {
//     int i=0;
//     int n;
//     scanf("%d", &n);
//     do{
//         printf("%d\n", i+1);
//         i++;
//     }while(i<n);
//     return 0;
// }

// print n natural no. in reverse order
#include <stdio.h>
int main()
{
    int n;
    printf("value of n is\n", n);
    scanf("%d", &n);
    for (int i=n; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}