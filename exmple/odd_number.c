#include<stdio.h>

int main()
{
    int n ;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("******\n");
    for (int i = 1; i <= n; i++)
    { 
        printf("%d\n",2*i-1);
    }
    return 0;
}