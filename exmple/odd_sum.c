#include<stdio.h>

int main()
{
    int n ,s=0,a ,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        s=s+2*i-1;  
    } 
    printf("\n%d ",s);
    return 0;
}
// #include<stdio.h>

// int main()
// {
//     int x = 128;
//     for(;x;x>>=1)
//     printf("%d ",x);
//     return 0;
// }