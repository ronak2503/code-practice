#include<stdio.h>

int main()
{
    int n,x=0,k,count=0,lock=1;
    printf("enter the number\n");
    scanf("%d",&n);
    while (n>0)
    {
        k=n%10;
        if (k==0&&lock)
        {
            count++;
        }
        else
        {
            lock=0;
        }
        x=x*10+k;
        n=n/10;
    }
    while (count--)
    {
        printf("%c",'O');
    }
    
        printf("%d",x);
    return 0;
}