#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("rj.txt","r");
    printf("the value of my charcter is %c\n",fgetc(ptr));
    printf("the value of my charcter is %c\n",fgetc(ptr));
    printf("the value of my charcter is %c\n",fgetc(ptr));
    printf("the value of my charcter is %c\n",fgetc(ptr));
    printf("the value of my charcter is %c\n",fgetc(ptr));
    return 0;
}