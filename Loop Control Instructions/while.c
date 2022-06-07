#include<stdio.h>

int main()
{
    int i=0,n;
    printf("enter number n\n");
    scanf("%d",&n);
    while (i<n)
    {
        printf("%d\n", i+1);
        i++;
    }    
    return 0;
}
