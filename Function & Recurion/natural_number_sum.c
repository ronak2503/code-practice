#include<stdio.h>
int sum(int n)
{
    if (n==1)
        return 1;
        return (n+sum(n-1));
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("sum of first %d number is %d\n",n,sum(n)); 
    return 0;
}
