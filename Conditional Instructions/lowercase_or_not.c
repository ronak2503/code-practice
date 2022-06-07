#include<stdio.h>

int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97)
    {
        printf("It is lowercase\n");
    }
    else
    {
        printf("It is not lowercase\n");
    }
    
    return 0;
}
