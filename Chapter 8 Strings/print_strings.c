#include <stdio.h>
int main()
{
    // char s[]="AKASH";
    char s[]={'A', 'K', 'A', 'S', 'H', ' ',};
    char *ptr= s;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}