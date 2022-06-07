#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("number_guess_game.c"," w ");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    
    printf("%d",num);


    return 0;
}