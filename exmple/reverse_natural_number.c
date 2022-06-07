#include<stdio.h>

int main()
{
    int i = 1;
    for ( i = 10; i > 0 ; i--)
    {
        printf("%d\n",i);
    }
    while (i<=10)
    {
        printf("%d ",11-i);
        i++;
    }
    // do
    // {  
    //     printf("%d\n",i);
    //     i--;
    // } while (i>0);
    
    
    return 0;
}