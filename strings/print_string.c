#include<stdio.h>

int main()
{
    char s[]="Ronak";
    char *ptr=s;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++; 
    }
    

    return 0;
}