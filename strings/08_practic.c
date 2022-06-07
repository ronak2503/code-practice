#include<stdio.h>

int main()
{
    char st[10],c;
    int f = 0;
    printf("Enter the string::");
    gets(st);
    printf("enter the charcter which you want to search==");
    scanf("%c",&c);
    for (int  i = 0; st[i] != '\0'; i++)
    {
        if(st[i]==c)
        {
            f = 1;
            break;
        }
    }
    if(f==1)
    {
        printf("charcter is present in string\n ");    
     }
    else
    {
        printf("charcter is not present in string\n ");    
    }
    
    return 0;
}