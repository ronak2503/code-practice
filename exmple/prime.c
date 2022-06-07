// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     for ( i = 2; i < n; i++)
//     {
//         if(n%i==0)
//         break;
//     }
//     if(i==n)
//     {
//         printf("prime");
//     }
//     else
//     {
//         printf("not prime");
//     }
//     return 0;
// }

#include<stdio.h>

int prime(int n)
{
    int i  ;
    for ( i = 2; i < n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int primeprint(int a , int b)
{
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            printf("%d\t",i);
        }
        
    }
    
}
int main()
{
    int n,a;
    printf("enter the number::");
    scanf("%d %d",&n,&a);
    primeprint(n,a);
    return 0;
}