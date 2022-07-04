#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (n >= 0 && n <= 9)
    {
        printf("the number is one digit ");
    }
    else if(n >= 10 && n <= 99)
    {
        printf("the is two digit");
    }
    else if(n >= 100 && n <= 999)
    {
        printf("the number is three digit ");
    }
    else if(n >= 1000 && n <= 9999)
    {
        printf("the number is four digit ");
    }
    else if(n >= 10000 && n <= 99999)
    {
        printf("the number is five digit ");
    }
    else
    {
        printf("the number is out of rang");
    }
    return 0;
}