#include <stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d", &a);
    if (a % 2)
    {
        printf("the number is odd %d", a);
    }
    else
    {
        printf("the number is even %d", a);
    }
    return 0;
}