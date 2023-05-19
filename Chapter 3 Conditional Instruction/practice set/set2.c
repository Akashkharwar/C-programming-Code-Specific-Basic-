#include <stdio.h>
int main()
{
    int m, p, c, t;
    float M, P, C, T;
    printf("Enter the no. of maths \n");
    scanf("%d", &m);

    printf("Enter the no. of Physics \n");
    scanf("%d", &p);

    printf("Enter the no. of Chemistry \n");
    scanf("%d", &c);

    printf("Total marks obtained is %d \n", t=m+p+c);
    printf("Percentage in maths %f\n",  M=m*100/100);
    printf("Percentage in Physics %f\n", P=p*100/100);
    printf("Percentage in Chemistry %f\n",C=c*100/100 );
    printf("Total Percentage %f\n",T=t*100/300 );

    if(T>=40 && M>=33 && P>=33 && C>=33 ){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    

    return 0;
}