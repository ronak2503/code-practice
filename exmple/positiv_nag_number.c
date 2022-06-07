#include<stdio.h>

int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("the postive number %d",a);
    }
    else
    {
        printf("the non postive number %d",a);
    }
    return 0;
}