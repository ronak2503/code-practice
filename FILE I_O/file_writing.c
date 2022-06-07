#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ronak.txt","w");
    fprintf(ptr ,"my name is ronak\n " );
    fprintf(ptr ,"i am from bca 1st year\n" );
    fclose(ptr);
    return 0;
}