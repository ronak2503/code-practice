#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("ronak.txt","r");
    fscanf(ptr,"%d",&num);
    ptr = fopen("ronak.txt","w");
    fprintf(ptr,"%d",num*2);
    return 0;
}