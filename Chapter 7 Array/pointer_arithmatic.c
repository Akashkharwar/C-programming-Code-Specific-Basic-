#include <stdio.h>
int main()
{
    // int i=34;
    // int *ptr=&i;
    // printf("value of ptr is %u\n",ptr);
    // ptr++;
    // printf("value of ptr is %u\n",ptr);
    // ptr--;
    // printf("value of ptr is %u\n",ptr);
    // ptr=ptr+1;
    // ptr++;
    // ptr++;
    // printf("value of ptr is %u\n",ptr);
    
    char i=34;
    char *ptr=&i;
    printf("value of ptr is %u    \n",ptr);
    ptr++;
    printf("value of ptr is %u\n",ptr);
    ptr--;
    printf("value of ptr is %u\n",ptr);
    ptr=ptr+1;
    ptr++;
    ptr++;
    printf("value of ptr is %u\n",ptr);
    return 0;
}